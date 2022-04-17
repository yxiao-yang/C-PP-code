#include<iostream>

using namespace std;

void sr();
void xs();
double calculate();

double score[10];

int main()
{
    double res;
    sr();
    xs();
    res = calculate();
    cout << "您输入的高尔夫成绩平均值为：" 
         << res 
         << endl;
    system("pause");
    return 0;
}

void sr()
{
    cout << "请输入高尔夫成绩（用空格隔开）：" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> score[i];
        if (score[i] == -1)
        {
            break;
        }
    }
}

void xs()
{
    cout << "您输入的高尔夫成绩如下：" << endl;
    for (int i = 0; i < 10; i++)
    {
        if (score[i] > 0)
        {
            cout << score[i] << endl;
        }
        else
            break;
    }
}

double calculate()
{
    double Sum = 0;
    int count = 0;
    double avg;
    for (int i = 0; i < 10; i++)
    {
        if (score[i] != -1)
        {
            Sum += score[i];
            count++;
        }
        else
            break;
    }
    return Sum / count;
}