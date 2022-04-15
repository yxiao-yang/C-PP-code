# include <iostream>
# include <string>

int main()
{
    using namespace std;
    struct Pizza
    {
        string name;
        float zj;
        float zl;
    };
    Pizza *temp = new Pizza;
    cout << "请输入披萨的直径：" << endl;
    cin >> (*temp).zj;
    cout << "请输入披萨公司的名称：" << endl;
    getline(cin, (*temp).name);
    cout << "请输入披萨的重量：" << endl;
    cin >> (*temp).zl;
    cout << (*temp).name 
         << ", "
         << (*temp).zj
         << ", "
         << (*temp).zl
         << endl;
    system("pause");
    return 0;
}