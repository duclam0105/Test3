#ifndef __STUDENT_H
#define __STUDENT_H

#include "Lib.h"

class student{
        string id;          //Form: 2017xxxx
        string name;
        string addess;
        int prior;
        khoi type;
    public:
        static int STT;
        student(){
            id = "";
            name = "";
            addess = "";
            STT++;
        }
        virtual ~student(){}
        void setID(const string&);
        void setName(const string&);
        void setAddr(const string&);
        void setType(const khoi&);
        void setPrior(const int&);
        string getID();
        string getName();
        string getAddr();
        khoi getType();
        string getTypeString();
        int getPrior();
        void autoSetID();
        virtual void addData();
        virtual void showData();
        // bool operator < (document a);
};

#endif

