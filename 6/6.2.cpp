# include <iostream>

using namespace std;

int main()
{
    double num[10];
    int i = 0;
    double sum = 0.0;    //�ܺ�
    int count_num = 0;  //�ܹ������ָ���
    double ave = 0.0;    //ƽ��ֵ
    int count_upper = 0;    //����ƽ��ֵ�ĸ���
    while (cin >> num[i]) 
    {
        sum += num[i];
        count_num++;
        i++;
        if (count_num > 10)
            break;
    }
    ave = sum / count_num;
    cout << "ƽ��ֵ��" << ave << endl;
    i = 0;
    while (i < count_num) 
    {
        if (num[i] > ave)
            count_upper++;
        i++;
    }
    cout << "��ƽ��ֵ�����" << count_upper << "��" << endl;
    system("pause");
    return 0;
}