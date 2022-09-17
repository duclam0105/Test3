#include "student.h"
// //===STUDENT FUNCTION
void student::autoSetID(){         //Form: FPTxxxx
    this->id = "2017" + string(4 - to_string(STT).length(), '0') + to_string(STT);
}
string student::getID()                             {return this->id;}
string student::getName()                           {return this->name;}
string student::getAddr()                           {return this->addess;}
khoi student::getType()                             {return this->type;}
int student::getPrior()                             {return this->prior;}
void student::setID(const string& id)               {this->id = id;}
void student::setName(const string& name)           {this->name = name;}
void student::setAddr(const string& addr)           {this->addess = addr;}
void student::setType(const khoi& type)             {this->type = type;}
void student::setPrior(const int& kv)               {this->prior = kv;}
string student::getTypeString(){
    if(type == A) return "A";
    else if(type == B) return "B";
    else if(type == C) return "C";
}
void student::addData(){       //ID is auto set
    // cout << "ID: ";
    // cin >> this->id;
    autoSetID();
    string str, str1;
    cin.ignore();
    do{
        cout << "Name: ";
        getline(cin, str);
        //cin.ignore();
        chuanhoaTen(str);
        if(str == "0") break;
    }while(!checkName(str));
    setName(str);
    // cin.ignore();
    cout << "Address: ";
    getline(cin, str1);
    chuanhoaTen(str1);
    setAddr(str1);
    cout << "Priority: ";
    cin >> this->prior;
}
void student::showData(){
    cout << "ID: " << this->id << " - Name: " << this->name << " - Address: " << this->addess
        << " - Type: " << this->getTypeString() << " - Priority: " << this->prior;
}

