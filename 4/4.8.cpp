# include <iostream>
# include <string>

int main()
{
    using namespace std;
    struct Pizza
    {
        string name;
        float zj;
        float zl;
    };
    Pizza *temp = new Pizza;
    cout << "������������ֱ����" << endl;
    cin >> (*temp).zj;
    cout << "������������˾�����ƣ�" << endl;
    getline(cin, (*temp).name);
    cout << "������������������" << endl;
    cin >> (*temp).zl;
    cout << (*temp).name 
         << ", "
         << (*temp).zj
         << ", "
         << (*temp).zl
         << endl;
    system("pause");
    return 0;
}