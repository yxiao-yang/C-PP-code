# include<iostream>
# include<string>

int main()
{
    using namespace std;

    struct CandyBar
    {
        string pp;
        float zl;
        int cll;
    };

    CandyBar snack;
    snack.pp = "Mocha Munch";
    snack.zl = 2.3;
    snack.cll = 350;
    cout << snack.pp << endl;
    cout << snack.zl << endl;
    cout << snack.cll << endl;
    system("pause");
    return 0;
}