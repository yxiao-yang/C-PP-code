# include <iostream>

int main()
{
    using namespace std;
    double sr;
    cout << "请输入您的收入：";
    while (cin >> sr && sr >= 0)
    {
        cout << "您应缴的所得税为：";
        if (0 <= sr && sr <= 5000)
        {
            cout << 0 << endl;
        }
        else if (5001 <= sr && sr <= 15000)
        {
            cout << (sr - 5000) * 0.1 << endl;
        }
        else if (15001 <= sr && sr <= 35000)
        {
            cout << 10000 * 0.1 + (sr - 15000) * 0.15 << endl;
        }
        else if (35001 <= sr)
        {
            cout << 10000 * 0.1 + 20000 * 0.15 + (sr - 35000) * 0.2 << endl;
        }
        else
        {
            break;
        }
    }
    system("pause");
    return 0;
}