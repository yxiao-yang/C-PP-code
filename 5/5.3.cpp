# include <iostream>

int main()
{
    using namespace std;
    float * array = new float [100];
    int flag = 0;
    float res = 0;
    float temp = 1;
    while (temp != 0)
    {
        cout << "请输入第" << flag + 1 << "个元素的值:" << endl;
        cin >> temp;
        res += temp;
        flag ++;
    }
    cout << "您输入的数字之和为：" << res << endl;
    system("pause");
    return 0;
}