#include "khoiA.h"

// // //===KHOI A FUNCTION
float typeA::getMath()                              {return math;}
float typeA::getPhysic()                            {return physic;}
float typeA::getChemistry()                         {return chemistry;}
void typeA::setMath(const float& grade)             {this->math = grade;}
void typeA::setPhysic(const float& grade)           {this->physic = grade;}
void typeA::setChemistry(const float& grade)        {this->chemistry = grade;}
void typeA::addData(){
    student::addData();
    cout << "Math: "; cin >> this->math;
    cout << "Physics: "; cin >> this->physic;
    cout << "Chemistry: "; cin >> this->chemistry;
}
void typeA::showData(){
    student::showData();
    cout << " - Math: " << this->math << " - Physic: " << this->physic
            << " - Chemistry: " << this->chemistry <<endl;
}
