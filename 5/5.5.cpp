# include <iostream>
# include <string>
# include <numeric>

int main()
{
    using namespace std;
    string month[12] = {"一月", "二月", "三月", "四月", "五月", "六月",\
                        "七月", "八月", "九月", "十月", "十一月", "十二月"};
    int res[12];
    for(int i = 0; i < 12; i++)
    {
        cout << "请输入" << month[i] << "的图书销量：" << endl;
        cin >> res[i];
    }
    cout << "全年销售总量为" << accumulate(res, res + 12, res[0]) << endl;
    system("pause");
    return 0;
}