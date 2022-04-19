#include<iostream>
#include<cstring>
template<typename T>

T maxn(T*, int);
template <> const char* maxn(const char* a[], int n);

int main()
{
    using namespace std;
    int a1[] = {1, 2, 3, 4, 5, 6};
    double a2[] = {1.1, 2.2, 3.3, 4.4};
    const char* a3[] = {"xiongda", "xionger", "guangtouqiang"};
    int res1 = maxn(a1, 6);
    double res2 = maxn(a2, 4);
    const char* res3 = maxn(a3, 3);
    cout << res1 << endl;
    cout << res2 << endl;
    cout << res3 << endl;
    system("pause");
    return 0;
}

template<typename T>
T maxn(T* a, int n)
{
    T temp = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > temp)
        {
            temp = a[i];
        }
    }
    return temp;
}

template <> const char* maxn(const char* a[], int n)
{
    const char* temp = a[0];
    for (int i = 0; i < n; i++)
    {
        if (strlen(a[i]) > strlen(temp))
        {
            temp = a[i];
        }
    }
    return temp;
}