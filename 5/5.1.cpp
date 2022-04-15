# include <iostream>
# include <string>

int main()
{
    using namespace std;
    string a, b;
    int start, end;
    int res;
    cout << "请输入两个整数（用空格分隔）：" << endl;
    scanf("%d %d", &start, &end);
    while(start <= end)
    {
        res += start;
        start ++;
    }
    cout << res << endl;
    system("pause");
    return 0;
}