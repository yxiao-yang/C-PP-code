# include <iostream>
# include <string>

int main()
{
    using namespace std;
    string str;
    int sum = 0;
    cout << "�������ַ�����" << endl;
    cin >> str;
    while (str != "done")
    {
        cin >> str;
        sum ++;
    }
    cout << "������ľ�������"
         << sum
         << "������"
         << endl;
    system("pause");
    return 0;
}