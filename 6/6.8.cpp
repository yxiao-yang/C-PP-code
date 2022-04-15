#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
    ifstream inFile;
    ifstream fin;
    string filename;
    char temp;
    int count = 0;
    cout << "Please enter name of data file: ";
    getline(cin, filename);
    inFile.open(filename);
    if (!inFile.is_open())
    {
        cout << "未能成功打开文件！" << endl;
    }
    inFile >> temp;
    while (inFile.good())
    {
        ++count;
        inFile >> temp;
    }
    cout << "共有" << count << "个字符" << endl;
    inFile.close();
    system("pause");
    return 0;
}