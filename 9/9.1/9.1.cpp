#include"golf.h"
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cout << "������ѡ�ָ�����" << endl;
    cin >> n;
    cin.get();
    golf players[n];
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "�������" << i + 1 << "��ѡ�ֵ���Ϣ" << endl;
        if (!setgolf(players[i]))
        {
            n = i ;
            break;
        }
    }
    cout << "ѡ����������" << endl;
    for (int i = 0; i < n; i++)
    {
        showgolf(players[i]);
    }
    system("pause");
    return 0;
}