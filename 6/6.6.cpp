# include <iostream>
# include <string>

int main()
{
    using namespace std;

    struct donate
    {
        string name;
        double money;
    };

    int n;
    int flag = 0;

    donate * temp = new donate [10001];
    cout << "��������������: ";
    cin >> n;
    cout << "���������������;������: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "�������" << i+1 << "λ����ߵ�����: ";
        cin >> temp[i].name;
        cin.get();
        cout << "�������" << i+1 << "λ����ߵľ������: ";
        cin >> temp[i].money;
    }
    cout << "��Ҫ����ˣ�" << endl;
    for (int i = 0; i < n; i++)
    {
        if (temp[i].money > 10000)
        {
            flag = 1;
            cout << temp[i].name << endl;
        }
    }
    if (!flag)
    {
        cout << "��" << endl;
    }
    flag = 0;
    cout << "����ˣ�" << endl;
    for (int i = 0; i < n; i++)
    {
        if (temp[i].money <= 10000)
        {
            flag = 1;
            cout << temp[i].name << endl;
        }
    }
    if (!flag)
    {
        cout << "��" << endl;
    }
    system("pause");
    return 0;
}