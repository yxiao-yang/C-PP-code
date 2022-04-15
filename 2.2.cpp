#include <iostream>

int main()
{
    using namespace std;
    int n;
    cout << "请输入一个以long为单位的距离:";
    cin >> n;
    int res = n * 220;
    cout << "其对应的码长为：" << res << endl;
    system("pause");
    return 0;
}