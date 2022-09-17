#include "khoiB.h"

// // //===KHOI B FUNCTION
float typeB::getMath()                              {return math;}
float typeB::getBiology()                           {return biology;}
float typeB::getChemistry()                         {return chemistry;}
void typeB::setMath(const float& grade)             {this->math = grade;}
void typeB::setBiology(const float& grade)          {this->biology = grade;}
void typeB::setChemistry(const float& grade)        {this->chemistry = grade;}
void typeB::addData(){
    student::addData();
    cout << "Math: "; cin >> this->math;
    cout << "Chemistry: "; cin >> this->chemistry;
    cout << "Biology: "; cin >> this->biology;
}
void typeB::showData(){
    student::showData();
    cout << " - Math: " << this->math << " - Chemistry: " << this->chemistry
            << " - Biology: " << this->biology <<endl;
}
