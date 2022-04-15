# include <iostream>

int main()
{
    using namespace std;
    float resA = 100;
    float resB = 100;
    int n = 0;
    while(resB <= resA)
    {
        resA += 10;
        resB = 0.05 * resB + resB;
        n++;
    }
    cout << n << "Äê" << endl;
    system("pause");
    return 0;
}