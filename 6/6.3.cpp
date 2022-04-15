# include <iostream>

bool Isprime(char);

using namespace std;

bool Isprime(char n)
{
    if (n == 'c' || n == 'p' || n == 't' || n == 'g')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char choice;
    int flag = 0;
    cout << "Please enter one of the following choices:" << endl;
    cout << "c) " << "carnivore           " 
         << "p) " << "pianist" << endl;
    cout << "t) " << "tree                "
         << "g) " << "game" << endl;
    while (flag == 0)
    {
        cin >> choice;
        switch (choice)
        {
            case 'c':
                cout << "A maple is a carnivore." << endl;
                flag = 1;
                break;
            case 'p':
                cout << "A maple is a pianist." << endl;
                flag = 1;
                break;
            case 't':
                cout << "A maple is a tree." << endl;
                flag = 1;
                break;
            case 'g':
                cout << "A maple is a game." << endl;
                flag = 1;
                break;
            default:
                cout << "Please enter a c, p, t, or g:";
                break;
        }
    }
    system("pause");
    return 0;
}