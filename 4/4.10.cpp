# include <iostream>
# include <array>

int main()
{
    using namespace std;
    array<float, 3> res;
    cout << "请输入第一次40m跑的成绩： ";
    cin >> res[0];
    cout << "请输入第二次40m跑的成绩： ";
    cin >> res[1];
    cout << "请输入第三次40m跑的成绩： ";
    cin >> res[2];
    cout << "三次40m跑的成绩为：" << endl;
    cout << res[0] << endl;
    cout << res[1] << endl;
    cout << res[2] << endl;
    system("pause");
    return 0;
}