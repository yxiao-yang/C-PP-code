# include<iostream>

int main()
{
    using namespace std;
    const double k1 = 1/0.0254;
    const double k2 = 1/2.2;
    int yc1, yc2, b;
    cout << "�������Ϊ����Ӣ�߶���Ӣ�磿" << endl;
    cout << "Ӣ��:";
    cin >> yc1;
    cout << "Ӣ��:";
    cin >> yc2;
    cout << "��������Ϊ���ٰ���" << endl;
    cin >> b;

    double sg, tz;
    sg = (yc1 * 12 + yc2) / k1;
    tz = b * k2;
    cout << "�������Ϊ" << sg << "��" << endl;
    cout << "��������Ϊ" << tz << "ǧ��" << endl;

    float BMI;
    if(sg > 0)
        BMI = tz / (sg * sg);
    cout << "����BMIָ��Ϊ��" << BMI << endl;
    system("pause");
    return 0;
}