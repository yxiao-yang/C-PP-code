# include <iostream>
using namespace std;

double temp(double);

double temp(double n)
{
    double huashi;
    huashi = n * 1.8 + 32;
    return huashi;
}

int main()
{
    double sheshi;
    cout << "�����������¶�:" << endl;
    cin >> sheshi;
    double huashi = temp(sheshi);
    cout << "���Ӧ�Ļ����¶�Ϊ" << huashi << endl;
    system("pause");
    return 0;
}