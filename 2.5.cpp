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
    cout << "请输入摄氏温度:" << endl;
    cin >> sheshi;
    double huashi = temp(sheshi);
    cout << "其对应的华氏温度为" << huashi << endl;
    system("pause");
    return 0;
}