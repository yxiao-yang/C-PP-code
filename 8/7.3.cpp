#include<iostream>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void xs1(const box temp2);
void xs2(box * temp3);

int main()
{
    box temp;
    cout << "������maker��";
    cin >> temp.maker;
    cout << "������height��";
    cin >> temp.height;
    cout << "������width��";
    cin >> temp.width;
    cout << "������length��";
    cin >> temp.length;
    cout << "������volume��";
    cin >> temp.volume;
    xs1(temp);
    xs2(&temp);
    xs1(temp);
    system("pause");
    return 0;
}

void xs1(const box temp2)
{
    cout << "�ṹ�����£�" << endl;
    cout << temp2.maker << endl;
    cout << temp2.height << endl;
    cout << temp2.width << endl;
    cout << temp2.length << endl;
    cout << temp2.volume << endl;
}

void xs2(box * temp3)
{
    temp3->volume = temp3->height *
                    temp3->length *
                    temp3->width;
}