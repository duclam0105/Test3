#ifndef __KHOIC_H
#define __KHOIC_H

#include "Lib.h"
#include "student.h"

class typeC:public student{
    private:
        float literature, history, geography;
    public:
        typeC(){
            student::setType(C);
        }
        float getLiterature();
        float getHistory();
        float getGeography();
        void setLiterature(const float&);
        void setHistory(const float&);
        void setGeography(const float&);
        void addData();
        void showData();
};
#endif



