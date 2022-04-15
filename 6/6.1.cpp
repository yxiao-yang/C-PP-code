# include <iostream>
# include <cstring>
# include <cctype>

using namespace std;

int main()
{
    char ch;
    cin.get(ch);
    while (ch != '@') {
        if (islower(ch)) {
            cout << char(toupper(ch));
        }
        else if (isupper(ch)) {
            cout << char(tolower(ch));
        }
        ++ch;
        cin.get(ch);
    }
    return 0;
}