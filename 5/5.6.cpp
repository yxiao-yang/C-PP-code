# include <iostream>
# include <string>
# include <numeric>

int main()
{
    using namespace std;
    string year[3] = {"��һ��", "�ڶ���", "������"};
    string month[12] = {"һ��", "����", "����", "����", "����", "����",\
                        "����", "����", "����", "ʮ��", "ʮһ��", "ʮ����"};
    int res[3][12];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 12; j++)
        {
            cout << "������" << year[i] << month[j] << "��ͼ��������" << endl;
            cin >> res[i][j];
        }
    }
    cout << "��һ������������Ϊ" << accumulate(res[0], res[0] + 12, res[0][0]) << endl;
    cout << "�ڶ�������������Ϊ" << accumulate(res[1], res[1] + 12, res[1][0]) << endl;
    cout << "����������������Ϊ" << accumulate(res[2], res[2] + 12, res[2][0]) << endl;
    system("pause");
    return 0;
}