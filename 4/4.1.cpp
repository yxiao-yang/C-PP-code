#include<iostream>
#include<string>

int main()
{
    using namespace std;

    char name1[20];
    char name2[20];
    char grade;
    int age;

    cout << "What is your first name? ";
    cin.getline(name1, 20);
    cout << "What is your last name? ";
    cin.getline(name2, 20);
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