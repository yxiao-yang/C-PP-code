# include <iostream>
# include <cstring>

int main()
{
    using namespace std;
    char str[20];
    int sum = 0;
    cout << "�������ַ�����" << endl;
    cin >> str;
    while (strcmp(str, "done"))
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