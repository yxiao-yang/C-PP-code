#include<iostream>
#include<cstring>

using namespace std;

struct CandyBar
{
    char brand[30];
    double weight;
    int heat;
};

void input(CandyBar*, char*, double, int);
void show(const CandyBar*);

int main()
{
    char a[30] = "Millennium Munch";
    double b = 2.85;
    int c = 350;
    CandyBar temp;
    input(&temp, a, b, c);
    show(&temp);
    system("pause");
    return 0;
}

void input(CandyBar* temp, char* A, double B, int C)
{
    strcpy(temp->brand, A);
    temp->weight = B;
    temp->heat = C;
}

void show(const CandyBar* temp)
{   
    cout << temp->brand << endl;
    cout << temp->weight << endl;
    cout << temp->heat << endl;
}