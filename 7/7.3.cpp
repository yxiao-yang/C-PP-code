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
    cout << "请输入maker：";
    cin >> temp.maker;
    cout << "请输入height：";
    cin >> temp.height;
    cout << "请输入width：";
    cin >> temp.width;
    cout << "请输入length：";
    cin >> temp.length;
    cout << "请输入volume：";
    cin >> temp.volume;
    xs1(temp);
    xs2(&temp);
    xs1(temp);
    system("pause");
    return 0;
}

void xs1(const box temp2)
{
    cout << "结构体如下：" << endl;
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