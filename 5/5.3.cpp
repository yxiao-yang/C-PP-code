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
        cout << "�������" << flag + 1 << "��Ԫ�ص�ֵ:" << endl;
        cin >> temp;
        res += temp;
        flag ++;
    }
    cout << "�����������֮��Ϊ��" << res << endl;
    system("pause");
    return 0;
}