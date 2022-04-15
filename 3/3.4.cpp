# include<iostream>

int main()
{
    using namespace std;
    int d, h, m, s;
    long shuru;
    cout << "Enter the number of seconds: ";
    cin >> shuru;
    s = shuru % 60;
    m = shuru % (60 * 60) / 60;
    h = shuru % (60 * 60 * 24) / (60 * 60);
    d = shuru / (60 * 60 * 24);
    cout << shuru << " seconds = " 
         << d << " days, "
         << h << " hours, "
         << m << " minutes, "
         << s << " seconds" << endl;
    system("pause");
    return 0;
}