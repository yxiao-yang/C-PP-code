# include <iostream>
# include <array>

int main()
{
    using namespace std;
    array<float, 3> res;
    cout << "�������һ��40m�ܵĳɼ��� ";
    cin >> res[0];
    cout << "������ڶ���40m�ܵĳɼ��� ";
    cin >> res[1];
    cout << "�����������40m�ܵĳɼ��� ";
    cin >> res[2];
    cout << "����40m�ܵĳɼ�Ϊ��" << endl;
    cout << res[0] << endl;
    cout << res[1] << endl;
    cout << res[2] << endl;
    system("pause");
    return 0;
}