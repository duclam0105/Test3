#ifndef __FUNCTION_H
#define __FUNCTION_H

#include "Lib.h"

bool checkName(string name){     //khong duoc chua chu so (tu 48 den 57 trong bang ma ascii)
    try{
        stringstream ss(name);
        string token;
        while (ss >> token)
        {
            for(int i = 0; i < token.length(); i++){
                if((token[i] > 47) && (token[i] < 58)){
                    throw myException("Invalid name!");
                }
            }
        }
    }
    catch(myException &ex1){
        cout << ex1.what() << endl;
        return false;
    }
    return true;
}
bool checkID(string id, string temp){
    try{
        if(id.length() != 8)    {throw myException("Invalid ID!");}
        if(id.substr(0, 4) != temp){
            throw myException("Invalid ID!");
        }
        stringstream ss(id);
        string token;
        while (ss >> token)
        {
            for(int i = 3; i < token.length(); i++){
                if((token[i] < 48) || (token[i] > 57)){
                    throw myException("Invalid ID!");
                }
            }
        }
    }
    catch(myException &ex1){
        cout << ex1.what() << endl;
        return false;
    }
    return true;
}
// bool checkSameID(set<string> list, string id){
//     if(list.size() < 1) return true;
//     try{
//         for(string i:listID){
//             if(i == id){
//                 throw myException("ID has been used!");
//             }
//         }
//     }
//     catch(myException &e){
//         cout << e.what() << endl;
//         return false;
//     }
//     return true;
// }
void chuanhoaTen(string &a){
    string res = "";
    stringstream ss(a);
    string token;
    while(ss >> token){
        res += toupper(token[0]);
        for(int i=1; i < token.length(); i++)
        {
            res+= tolower(token[i]);
        }
        res += " ";
    }
    res.erase(res.length()-1);
    a = res;
}
// // //===================
// void chuanhoaID(string &a){
//     if(a.length() > 3){
//         string res = "";
//         stringstream ss(a);
//         string token;
//         while(ss >> token){
//             res += toupper(token[0]);
//             res += toupper(token[1]);
//             res += toupper(token[2]);
//             for(int i = 3; i < token.length(); i++)
//             {
//                 res+= tolower(token[i]);
//             }
//             res += " ";
//         }
//         res.erase(res.length()-1);
//         a = res;
//     }
// }

#endif // __FUNCTION_H
