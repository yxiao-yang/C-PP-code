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
    CandyBar *snack = new CandyBar[3];
    snack[0] = {"first", 2.3, 300};
    snack[1] = {"second", 2.5, 350};
    snack[2] = {"third", 2.1, 295};
    cout << snack[0].pp << " " << snack[0].zl << " " << snack[0].cll << endl;
    cout << snack[1].pp << " " << snack[1].zl << " " << snack[1].cll << endl;
    cout << snack[2].pp << " " << snack[2].zl << " " << snack[2].cll << endl;
    system("pause");
    return 0;
}