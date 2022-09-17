#ifndef __KHOIA_H
#define __KHOIA_H

#include "Lib.h"
#include "student.h"

class typeA:public student{
    private:
        float math, physic, chemistry;
    public:
        typeA(){
            student::setType(A);
        }
        float getMath();
        float getPhysic();
        float getChemistry();
        void setMath(const float&);
        void setPhysic(const float&);
        void setChemistry(const float&);
        void addData();
        void showData();
};

#endif


