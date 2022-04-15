# include<iostream>

int main()
{
    using namespace std;
    const int k = 12;
    int a, b, c;
    cout << "请输入您的身高（英寸）" << endl;
    cin >> a;
    b = a / 12;
    c = a % 12;
    cout << "您的身高为" << b << "英尺" << c << "英寸" << endl;
    system("pause");
    return 0;
}