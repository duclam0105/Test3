#ifndef __LIBRARY
#define __LIBRARY

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

#define yes 1
#define no 0
#define ID_TEMPLATE "2017"
typedef enum { cmd_exit, cmd_add, cmd_remove, cmd_find, cmd_showlist}comand;
typedef enum { exit_t, khoiA_t, khoiB_t, khoiC_t}type_t;

typedef enum{ A, B, C, X}khoi;
// typedef enum{ kv1, kv2, kv3}khuvuc;

class myException:public exception{
    string msg;
    public:
        myException(string mess){
            msg = mess;
        }
        string what(){
            return msg;
        }
};
bool checkName(string name);
bool checkID(string id, string temp = ID_TEMPLATE);
void chuanhoaTen(string &a);
#endif
