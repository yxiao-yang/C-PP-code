# include <iostream>
# include <string>
# include <numeric>

int main()
{
    using namespace std;
    string month[12] = {"һ��", "����", "����", "����", "����", "����",\
                        "����", "����", "����", "ʮ��", "ʮһ��", "ʮ����"};
    int res[12];
    for(int i = 0; i < 12; i++)
    {
        cout << "������" << month[i] << "��ͼ��������" << endl;
        cin >> res[i];
    }
    cout << "ȫ����������Ϊ" << accumulate(res, res + 12, res[0]) << endl;
    system("pause");
    return 0;
}