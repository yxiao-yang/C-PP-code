#include<iostream>
#include<cstring>

using namespace std;

struct stringy
{
    char* str;
    int ct;
};
void set(stringy &, char *);
void show(stringy &, int n = 1);
void show(char *, int n = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    cout << "Done!" << endl;
    system("pause");
    return 0;
}

void set(stringy &beany, char* testing)
{
    beany.str = new char [100];
    strcpy(beany.str, testing);
    beany.ct = strlen(testing);
}

void show(stringy & beany, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << beany.str << endl;
    }
}

void show(char* testing, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << testing << endl;
    }
}