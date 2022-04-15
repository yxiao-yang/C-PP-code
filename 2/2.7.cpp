# include <iostream>
using namespace std;

void print(int, int);

void print(int hours, int minutes)
{
    cout << "Time: " << hours << ":" << minutes << endl;
}

int main()
{
    int a;
    int b;
    cout << "Enter the number of hours: ";
    cin >> a;
    cout << "Enter the number of minutes: ";
    cin >> b;
    print(a, b);
    system("pause");
    return 0;
}