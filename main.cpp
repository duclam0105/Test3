#include "Lib.h"
#include "student.h"
#include "khoiA.h"
#include "khoiB.h"
#include "khoiC.h"
#include "manage.h"
int student::STT = 0;
// //====== MAIN ======//
int main() {
    int temp;
    manage cs;
    while (true) {
        cout << "===================\n";
        cout << "1-Them moi hoc sinh\n2-Xoa hoc sinh\n3-Tim kiem\n4-Hien thi danh sach\n0-Thoat\nMoi ban nhap: ";
        cin >> temp;
        cout << "===================\n";
        switch (temp) {
        case cmd_exit: {
            cout << "Close the program..." << endl;
            system("cls");
            return 0;
        }
        case cmd_add:
            cs.addData();
            break;
        case cmd_remove: {
            string str;
            do {
                cout << "Nhap ID hoc sinh can xoa: ";
                cin >> str;
                // chuanhoaID(str);
                if (str == "0") break;
            } while (!checkID(str));
            cs.delData(str);
            break;
        }
        case cmd_find: {
            string str1;
            do {
                cout << "Nhap ID hoc sinh can tim kiem: ";
                cin >> str1;
                // chuanhoaID(str1);
                if (str1 == "0") break;
            } while (!checkID(str1));
            cs.findData(str1);
            break;
        }
        case cmd_showlist: {
            int tmp;
            cout << "0-All - 1-Khoi A - 2-Khoi B - 3-Khoi C: ";
            cin >> tmp;
            cs.showType(tmp);
            break;
        }
        default:
            break;
        }
    }
    cout << "Close the program..." << endl;
    system("cls");
    return 0;
}
