# include <iostream>
# include <string>

using namespace std;

struct car
{
    string sj;
    int year;
};

int main()
{
    int n;
    cout << "How many cars do you wish to catalog? ";
    cin >> n;
    car * res = new car[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Car #" << i+1 << ":" << endl;
        cout << "Please enter the make: ";
        cin.get();
        getline(cin, (res[i]).sj);
        cout << "Please enter the year made: ";
        cin >> res[i].year;
    }
    cout << "Here is your collection:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << res[i].year
             << " "
             << res[i].sj
             << endl;
    }
    system("pause");
    return 0;
}
