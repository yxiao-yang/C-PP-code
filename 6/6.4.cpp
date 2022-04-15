#include <iostream>

using namespace std;

const int strsize = 20;

struct bop {
    char fullname[strsize];  //真实姓名
    char title[strsize];    //头衔
    char bopname[strsize];  //bop姓名
    int preference; //0=fullname, 1=title, 2=bopname
};

int main()
{
    bop people[5] = {
        {"Bob", "player", "B", 0},
        {"Jack", "boss", "J", 2},
        {"Steve", "worker", "S", 2},
        {"White", "engineer", "W", 1},
        {"Alex", "finder", "A", 0},
    };
    cout << "菜单：" << endl;
    cout << "a.fullname\tb.title" << endl;
    cout << "c.bopname\td.preference" << endl;
    cout << "q.quit" << endl;
    cout << "请输入：";
    char choice;
    while (true) {
        cin >> choice;
        if ((choice == 'a')||(choice == 'b')||(choice == 'c')||(choice == 'd')||(choice == 'q')) {
            switch (choice) {
            case 'a': {
                for (int i = 0; i < 5; i++) {
                    cout << people[i].fullname << endl;
                }
                break;
            }
            case 'b': {
                for (int i = 0; i < 5; i++) {
                    cout << people[i].title << endl;
                }
                break;
            }
            case 'c': {
                for (int i = 0; i < 5; i++) {
                    cout << people[i].bopname << endl;
                }
                break;
            }
            case 'd': {
                for (int i = 0; i < 5; i++) {
                    switch (people[i].preference) {
                    case 0:
                        cout << people[i].fullname << endl;
                        break;
                    case 1:
                        cout << people[i].title << endl;
                        break;
                    case 2:
                        cout << people[i].bopname << endl;
                        break;
                    }
                }   //for
                break;
            }   //case 'd'
            }   //switch
            if (choice == 'q') {
                cout << "再见！" << endl;
                break;
            }
        }   //if
        else {
            cout << "输入有误，请重新输入：";
        }
    }
    system("pause");
    return 0;
}

