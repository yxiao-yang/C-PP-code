#include<iostream>

using namespace std;

double long calculate(int);

int main()
{
    int n;
    double long res;
    cout << "������һ��������";
    cin >> n;
    res = calculate(n);
    cout << "���Ľ׳�Ϊ " << res << endl;
    system("pause");
    return 0;
}

double long calculate(int n)
{
    if (n == 1)
    {
        return n;
    }
    else
        return n * calculate(n-1);
}