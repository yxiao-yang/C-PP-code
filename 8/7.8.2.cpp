#include <iostream>

const int Seasons = 4;
const char* Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};
struct money
{
    double price[Seasons];
};

void fill(money* pa, int n);
void show(money* pa, int n);

int main()
{
    money expenses;
    fill(&expenses, Seasons);
    show(&expenses, Seasons);
    return 0;
}

void fill(money* pa, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> pa->price[i];
    }
    return;
}

void show(money* pa, int n)
{
    double total = 0.0;

    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < n; i++)
    {
        std::cout << Snames[i] << ": $" << pa->price[i] << '\n';
        total += pa->price[i];
    }
    std::cout << "Total: $" << total << '\n';
    return;
}
