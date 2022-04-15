# include<iostream>

int main()
{
    using namespace std;
    const double k1 = 1/0.0254;
    const double k2 = 1/2.2;
    int yc1, yc2, b;
    cout << "您的身高为多少英尺多少英寸？" << endl;
    cout << "英尺:";
    cin >> yc1;
    cout << "英寸:";
    cin >> yc2;
    cout << "您的体重为多少磅？" << endl;
    cin >> b;

    double sg, tz;
    sg = (yc1 * 12 + yc2) / k1;
    tz = b * k2;
    cout << "您的身高为" << sg << "米" << endl;
    cout << "您的体重为" << tz << "千克" << endl;

    float BMI;
    if(sg > 0)
        BMI = tz / (sg * sg);
    cout << "您的BMI指数为：" << BMI << endl;
    system("pause");
    return 0;
}