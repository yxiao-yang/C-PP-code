#include <iostream>

int main()
{
    using namespace std;
    int n;
    cout << "请输入您的年龄：" << endl;
    cin >> n;
    int res = n * 12;
    cout << "您的年龄包含" << res << "个月" << endl;
    system("pause");
    return 0;
}