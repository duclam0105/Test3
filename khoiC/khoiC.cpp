#include "khoiC.h"

// // //===KHOI C FUNCTION
float typeC::getLiterature()                        {return literature;}
float typeC::getHistory()                           {return history;}
float typeC::getGeography()                         {return geography;}
void typeC::setLiterature(const float& grade)       {this->literature = grade;}
void typeC::setHistory(const float& grade)          {this->history = grade;}
void typeC::setGeography(const float& grade)        {this->geography = grade;}
void typeC::addData(){
    student::addData();
    cout << "Literature: "; cin >> this->literature;
    cout << "History: "; cin >> this->history;
    cout << "Geography: "; cin >> this->geography;
}
void typeC::showData(){
    student::showData();
    cout << " - Literature: " << this->literature << " - History: " << this->history
            << " - Geography: " << this->geography <<endl;
}
