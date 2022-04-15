# include<iostream>
# include<cstring>

int main()
{
    using namespace std;
    char name1[20], name2[20];
    cout << "Enter your first name: ";
    cin >> name1;
    cout << "Enter your last name: ";
    cin >> name2;
    strcat(name2, ", ");
    strcat(name2, name1);
    cout << "Here's the information in a single string: "
         << name2
         << endl;
    system("pause");
    return 0;
}