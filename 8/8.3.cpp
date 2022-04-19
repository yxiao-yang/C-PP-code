#include<iostream>
#include<cstring>

using namespace std;

void upper(string &);

int main()
{
    string temp;
    cout << "Enter a string (q to quit): ";
    getline(cin, temp);
    while (temp != "q")
    {
        upper(temp);
        cout << "Enter a string (q to quit): ";
        getline(cin, temp);
    }
    system("pause");
    return 0;
}

void upper(string &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        a[i] = toupper(a[i]);
    }
    cout << a << endl;
}