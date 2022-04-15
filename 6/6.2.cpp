# include <iostream>

using namespace std;

int main()
{
    double num[10];
    int i = 0;
    double sum = 0.0;    //总和
    int count_num = 0;  //总共的数字个数
    double ave = 0.0;    //平均值
    int count_upper = 0;    //大于平均值的个数
    while (cin >> num[i]) 
    {
        sum += num[i];
        count_num++;
        i++;
        if (count_num > 10)
            break;
    }
    ave = sum / count_num;
    cout << "平均值：" << ave << endl;
    i = 0;
    while (i < count_num) 
    {
        if (num[i] > ave)
            count_upper++;
        i++;
    }
    cout << "比平均值大的有" << count_upper << "个" << endl;
    system("pause");
    return 0;
}