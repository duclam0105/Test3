#ifndef __MANAGE_H
#define __MANAGE_H

#include "Lib.h"
#include "student.h"
#include "khoiA.h"
#include "khoiB.h"
#include "khoiC.h"

class manage{
    vector <student*> v;
    int id;
    public:
        manage(){
            cout << "Quan li du lieu duoc tao!" << endl;
        }
        ~manage(){
            if(!v.empty()){
                for(student *i:v){
                    delete(i);
                }
            }
        }
        void addData();
        void delData(const string& id);
        void findData(const string& id);
        void showType(const int& type);
        void showList();
        void showMemberData(const unsigned int& index);
        int getSize(){
            return v.size();
        }
};
#endif
