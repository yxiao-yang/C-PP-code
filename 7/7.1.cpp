#include<iostream>

using namespace std;

double calculate(double, double);

int main()
{
    double a, b;
    double res;
    cout << "����������ֵ���ÿո��������" << endl;
    cin >> a >> b;
    while (a != 0 && b != 0)
    {
        res = calculate(a, b);
        cout << "����ƽ����Ϊ " << res << endl;
        cin >> a >> b;
    }
    system("pause");
    return 0;
}

double calculate(double m, double n)
{
    return (2.0 * m * n / (m + n));
} 