#include <iostream>
/*
Change anox cragir
*/
enum Valuta{AMD = 1,USD,RUB};
double change(Valuta from, Valuta to, double value);

int main(int argc, char const *argv[])
{
    int choic{};
    std::cout << "Choose From\nEnter\n1 for ADM\n"
            << "2 for USD\nand 3 for RUB\n";
    std::cin >> choic;
    Valuta from = (Valuta)choic;
    std::cout << "Choose To\nEnter\n1 for ADM\n"
            << "2 for USD\nand 3 for RUB\n";
    std::cin >> choic;
    Valuta to = (Valuta)choic;
    std::cout << "Enter amount of money : ";
    double amount{};
    std::cin >> amount;
    std::cout << change(from, to, 100);
    return 0;
}

double change(Valuta from, Valuta to, double value)
{
    switch (from)
    {
    case AMD:
            switch (to)
            {
            case AMD:
                return value;
                break;
            case USD:
                return value * 0.0025;
            case RUB:
                return value * 0.23;
            default:
                break;
            }
        break;
    case USD:
        switch (to)
            {
            case AMD:
                return value * 402.51;
                break;
            case USD:
                return value;
            case RUB:
                return value * 92.06;
            default:
                break;
            }
    case RUB:
        switch (to)
            {
            case AMD:
                return value * 4.37;
                break;
            case USD:
                return value * 0.011;
            case RUB:
                return value;
            default:
                break;
            }
    default:
        break;
    }
}