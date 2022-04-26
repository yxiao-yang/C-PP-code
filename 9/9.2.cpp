#include<iostream>
#include<string>
using namespace std;

const int ArSize = 10;
void strcount(const string str);

int main()
{
    string input;
    char next;

    cout << "Enter a line:\n";
    getline(cin, input);
    while (cin)
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, input);
        if (input == "")
            break;
    }
    cout << "Bye\n";
    system("pause");
    return 0;
}

void strcount(const string str)
{
    static int total = 0;
    int count = 0;
    int CountEmpty = 0;

    cout << "\"" << str << "\" contains ";
    while (str[count])
    {    
        if (str[count] == ' ')
        {
            count++;
            CountEmpty++;
        }
        else
            count++;
    }
    total += count - CountEmpty;
    cout << count - CountEmpty << " characters\n";
    cout << total << " characters total\n";
}