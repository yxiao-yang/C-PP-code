#include"golf.h"
#include<iostream>
#include<cstring>
using namespace std;

void setgolf(golf & g, const char* name, int hc)
{
    strcpy_s(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g)
{
    cout << "������������(ֱ�Ӱ��س��˳�����)" << endl;
    cin.getline(g.fullname, Len);
    if (strcmp(g.fullname, "") == 0)
    {
        return 0;
    }
    cout << "������ȼ���" << endl;
    cin >> g.handicap;
    cin.get();
    return 1;
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf & g)
{
    cout << g.fullname << "   " << g.handicap << endl;
}