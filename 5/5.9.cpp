# include <iostream>
# include <string>

int main()
{
    using namespace std;
    string str;
    int sum = 0;
    cout << "请输入字符串：" << endl;
    cin >> str;
    while (str != "done")
    {
        cin >> str;
        sum ++;
    }
    cout << "您输入的句子中有"
         << sum
         << "个单词"
         << endl;
    system("pause");
    return 0;
}