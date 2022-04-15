#include <iostream>
using namespace std;

void temp1();
void temp2();

void temp1()
{
    cout << "Three blind mice" << endl;
}

void temp2()
{
    cout << "See how they run" << endl;
}

int main()
{
    using namespace std;
    for(int i = 0; i < 2; i++)
    {
    temp1();
    }
    for(int i = 0; i < 2; i++)
    {
    temp2();
    }
    system("pause");
    return 0;
}