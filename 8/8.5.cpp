#include<iostream>
using namespace std;
template<typename T>

T max5(T a[]);

int main()
{
    int a1[] = {1, 2, 3, 4, 5};
    double a2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int res1 = max5(a1);
    double res2 = max5(a2);
    cout << res1 << endl;
    cout << res2 << endl;
    system("pause");
    return 0;
}

template<typename T>
T max5(T a[])
{
    T temp = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > temp)
        {
            temp = a[i];
        }
    }
    return temp;
}