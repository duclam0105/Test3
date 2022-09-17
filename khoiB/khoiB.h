#ifndef __KHOIB_H
#define __KHOIB_H

#include "Lib.h"
#include "student.h"

class typeB:public student{
    private:
        float math, biology, chemistry;
    public:
        typeB(){
            student::setType(B);
        }
        float getMath();
        float getBiology();
        float getChemistry();
        void setMath(const float&);
        void setBiology(const float&);
        void setChemistry(const float&);
        void addData();
        void showData();
};

#endif


