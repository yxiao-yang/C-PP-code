# include <iostream>
# include <string>
# include <numeric>

int main()
{
    using namespace std;
    string year[3] = {"第一年", "第二年", "第三年"};
    string month[12] = {"一月", "二月", "三月", "四月", "五月", "六月",\
                        "七月", "八月", "九月", "十月", "十一月", "十二月"};
    int res[3][12];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 12; j++)
        {
            cout << "请输入" << year[i] << month[j] << "的图书销量：" << endl;
            cin >> res[i][j];
        }
    }
    cout << "第一年年销售总量为" << accumulate(res[0], res[0] + 12, res[0][0]) << endl;
    cout << "第二年年销售总量为" << accumulate(res[1], res[1] + 12, res[1][0]) << endl;
    cout << "第三年年销售总量为" << accumulate(res[2], res[2] + 12, res[2][0]) << endl;
    system("pause");
    return 0;
}