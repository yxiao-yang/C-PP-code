# include<iostream>

int main()
{
    using namespace std;
    long long total, us;
    double res;
    cout << "Enter the world's population: ";
    cin >> total;
    cout << "Enter the population of the US: ";
    cin >> us;
    res = double(us) / double(total) * 100.0;
    cout << "The population of the us is " 
         << res
         << "% of the world population"
         << endl;
    system("pause");
    return 0;
}