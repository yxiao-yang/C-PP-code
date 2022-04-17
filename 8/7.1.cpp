#include<iostream>

using namespace std;

double calculate(double, double);

int main()
{
    double a, b;
    double res;
    cout << "请输入两个值（用空格隔开）：" << endl;
    cin >> a >> b;
    while (a != 0 && b != 0)
    {
        res = calculate(a, b);
        cout << "调和平均数为 " << res << endl;
        cin >> a >> b;
    }
    system("pause");
    return 0;
}

double calculate(double m, double n)
{
    return (2.0 * m * n / (m + n));
} 