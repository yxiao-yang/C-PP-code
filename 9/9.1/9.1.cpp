#include"golf.h"
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cout << "请输入选手个数：" << endl;
    cin >> n;
    cin.get();
    golf players[n];
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "请输入第" << i + 1 << "个选手的信息" << endl;
        if (!setgolf(players[i]))
        {
            n = i ;
            break;
        }
    }
    cout << "选手名单如下" << endl;
    for (int i = 0; i < n; i++)
    {
        showgolf(players[i]);
    }
    system("pause");
    return 0;
}