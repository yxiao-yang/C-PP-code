# include <iostream>
using namespace std;

double tianwen(double);

double tianwen(double n)
{
    double tianwen = 63240 * n;
    return tianwen;
}

int main()
{
    double n;
    cout << "Enter the number of light years:";
    cin >> n;
    double res = tianwen(n);
    cout << n << " light years = " << res << " astronomical units" << endl;
    system("pause");
    return 0;
}