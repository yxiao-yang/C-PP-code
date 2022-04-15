#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char word[20];
    int count1 = 0,
        count2 = 0,
        count3 = 0;
    
    cout << "Enter words (q to quit): " << endl;
    cin >> word;
    while (strcmp(word, "q"))
    {
        if (isalpha(word[0]))
        {
            switch (word[0])
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    count1++;
                    break;
                default:
                    count2++;
                    break;
            }
        }
        else
        {
            count3++;
        }
        cin >> word;
    }
    cout << count1 << " words beginning with vowels" << endl;
    cout << count2 << " words beginning with consonants" << endl;
    cout << count3 << " others" << endl;
    system("pause");
    return 0;
}