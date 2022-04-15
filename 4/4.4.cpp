# include<iostream>
# include<string>

int main()
{
    using namespace std;
    string name1, name2;
    cout << "Enter your first name: ";
    cin >> name1;
    cout << "Enter your last name: ";
    cin >> name2;
    cout << "Here's the information in a single string: "
         << name2 + ", " + name1
         << endl;
    system("pause");
    return 0;
}