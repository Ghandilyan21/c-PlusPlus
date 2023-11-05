#include <iostream>
bool three_baj(int n)
{
    int count{};
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
        {
            ++count;
        }
        if (count > 3)
        {
            return false;
        }
    }
    if (count == 3)
    {
        return true;
    }
    return false;
}
int main(int argc, char const *argv[])
{
    std::cout << three_baj(10);
    return 0;
}
