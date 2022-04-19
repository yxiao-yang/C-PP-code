#include<iostream>

using namespace std;

void print(const char* temp, int n = 0);

int main()
{
    char str[128];
    int print_times = 0;
    cout << "Enter the string you want to print: ";
    cin.getline(str, 128);
    cout << "Enter the times you want to print: ";
    cin >> print_times;
 
    // 测试传入两个参数
    cout << "Test fun which has two prematers: " << endl;
    print(str, print_times);
 
    // 测试传入一个参数
    cout << "Test fun which has one premater: " << endl;
    print(str);
    system("pause");
    return 0;
}

void print(const char* temp, int n)
{
    cout << temp << endl;
    while (n > 1)
    {
        n--;
        print(temp, n);
        break;
    }
}