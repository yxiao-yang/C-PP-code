# include <iostream>
# include <string>

int main()
{
    using namespace std;

    struct donate
    {
        string name;
        double money;
    };

    int n;
    int flag = 0;

    donate * temp = new donate [10001];
    cout << "请输入捐款者数量: ";
    cin >> n;
    cout << "请输入捐款者姓名和捐款数额: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "请输入第" << i+1 << "位捐款者的姓名: ";
        cin >> temp[i].name;
        cin.get();
        cout << "请输入第" << i+1 << "位捐款者的捐款数额: ";
        cin >> temp[i].money;
    }
    cout << "重要捐款人：" << endl;
    for (int i = 0; i < n; i++)
    {
        if (temp[i].money > 10000)
        {
            flag = 1;
            cout << temp[i].name << endl;
        }
    }
    if (!flag)
    {
        cout << "无" << endl;
    }
    flag = 0;
    cout << "捐款人：" << endl;
    for (int i = 0; i < n; i++)
    {
        if (temp[i].money <= 10000)
        {
            flag = 1;
            cout << temp[i].name << endl;
        }
    }
    if (!flag)
    {
        cout << "无" << endl;
    }
    system("pause");
    return 0;
}