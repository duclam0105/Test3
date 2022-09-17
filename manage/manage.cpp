#include "manage.h"

// // //=================//
void manage::addData(){
    int a;
    cout <<"1-Khoi A - 2-Khoi B - 3-Khoi C - 0-Back: ";
    cin >> a;
    switch (a){
        case exit_t:
            return;
        case khoiA_t:{
            typeA *p = new typeA;
            p->addData();
            p->showData();
            v.push_back(p);
            break;
        }
        case khoiB_t:{
            typeB *p = new typeB;
            p->addData();
            p->showData();
            v.push_back(p);
            break;
        }
        case khoiC_t:{
            typeC *p = new typeC;
            p->addData();
            p->showData();
            v.push_back(p);
            break;
        }
        default:
            cout <<"Nhap sai! Nhap so trong khoang 0 - 3\n";
            break;
    }
    int q;
    cout << "Ban co muon nhap them? 1-Yes/0-No: "; cin >> q;
    if (q == yes){
        manage::addData();
    }
}
void manage::delData(const string& id){
    int count = 0;
    if(v.empty()){
        cout << "No data in list!"<<endl;
        return;
    }
    for(int i = 0; i < v.size(); i++){
        if(v[i]->getID() == id){
            count++;
            student *tmp = v[i];
            v.erase(v.begin() + i);
            delete(tmp);
            i--;
        }
    }
    if(count == 0){
        cout << "Can not find student has ID: "<<id<<" in list!"<<endl;
        return;
    }
    cout << "Delete done!" << endl;
}
void manage::showMemberData(const unsigned int& index){
    if(v.empty()){
        // cout << "No data in list!"<<endl;
        return;
    }
    if(index < v.size()){
        if(v[index]->getType() == A){
            typeA *p = dynamic_cast<typeA*>(v[index]);
            p->showData();
        }
        else if(v[index]->getType() == B){
            typeB *p = dynamic_cast<typeB*>(v[index]);
            p->showData();
        }
        else if(v[index]->getType() == C){
            typeC *p = dynamic_cast<typeC*>(v[index]);
            p->showData();
        }
    }
}
void manage::findData(const string& id){
    int count = 0;
    if(v.empty()){
        cout << "No data in list!"<<endl;
        return;
    }
    for(int i = 0; i < v.size(); i++){
        if(v[i]->getID() == id){
            cout << i+1 << ". ";
            count ++;
            showMemberData(i);
        }
    }
    if(count == 0){
        cout << "Can not find student has ID: " << id << " in list!"<<endl;
    }
}
void manage::showList(){
    if(v.empty()){
        cout << "No data in list!"<<endl;
        return;
    }
    for(int i = 0; i < v.size(); i++){
        cout << i+1<<". ";
        showMemberData(i);
    }
}
void manage::showType(const int& type){
    if(v.empty()){
        cout << "No data in list!"<<endl;
        return;
    }
    int count = 0;
    if(type == 0){
        showList();
    }
    else if(type == khoiA_t){
        for(int i = 0; i < v.size(); i++){
            if(v[i]->getType() == A){
                count++;
                cout << i+1<<". ";
                showMemberData(i);
            }
        }
        if(count == 0){
            cout << "No data to show!"<<endl;
        }
    }
    else if(type == khoiB_t){
        for(int i = 0; i < v.size(); i++){
            if(v[i]->getType() == B){
                count++;
                cout << i+1<<". ";
                showMemberData(i);
            }
        }
        if(count == 0){
            cout << "No data to show!"<<endl;
        }
    }
    else if(type == khoiC_t){
        for(int i = 0; i < v.size(); i++){
            if(v[i]->getType() == C){
                count++;
                cout << i+1<<". ";
                showMemberData(i);
            }
        }
        if(count == 0){
            cout << "No data to show!"<<endl;
        }
    }
    else {return;}
}
