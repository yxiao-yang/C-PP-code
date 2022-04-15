#include<iostream>

int main()
{
    using namespace std;
    float lc, hyl;
    float res;
    cout << "请输入驱车里程（英里）：";
    cin >> lc;
    cout << "请输入耗油量（加仑）：";
    cin >> hyl;
    res = hyl / lc;
    cout << "每耗油一加仑能行驶的里程数为"
         << res
         << "英里"
         << endl;
    system("pause");
    return 0;
}