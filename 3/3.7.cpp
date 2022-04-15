#include<iostream>

int main()
{
    using namespace std;
    float shuru;
    float jialun, res;
    cout << "请输入每100公里耗油量（升）：";
    cin >> shuru;
    res = 62.4 / (shuru / 3.875);
    cout << "每加仑汽油大概行驶里程数（公里）为："
         << res
         << endl;
    system("pause");
    return 0;
}