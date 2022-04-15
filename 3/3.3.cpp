# include<iostream>

int main()
{
    using namespace std;
    float d, m, s;
    float res;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> d;
    cout << "Next, enter the minutes of arc: ";
    cin >> m;
    cout << "Finally, enter the seconds of arc: ";
    cin >> s;
    res = d + (m + s / 60) / 60;
    cout << d << " degrees, " << m << " minutes, " << s << " seconds, = " << res << " degrees" << endl;
    system("pause");
    return 0;
}