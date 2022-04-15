#include<iostream>
#include<string>

int main()
{
    using namespace std;

    string name1;
    string name2;
    char grade;
    int age;

    cout << "What is your first name? ";
    getline(cin, name1);
    cout << "What is your last name? ";
    getline(cin, name2);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;

    cout << "Name: "
         << name2
         << ", "
         << name1
         << endl;
    cout << "Grade: "
         << char(grade + 1)
         << endl;
    cout << "Age: "
         << age
         << endl;
    system("pause");
    return 0;
}