#include<iostream>

using namespace std;

long double probability(int, int);

int main()
{
    long double res;
    res = probability(47, 5) * probability(27, 1);
    cout << "����" << res*100 << "%�ĸ����н�" << endl;
    system("pause");
    return 0;
}

long double probability(int a, int b)
{
    long double temp = 1.0;
    for (int i = 0; i < b; i++)
    {
        temp = temp * (1/a);
    }
    return temp;
}