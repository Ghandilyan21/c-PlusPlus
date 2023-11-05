#include <iostream>
#include <cmath>
bool four_degree(int n)
{
       
        if ((n & (n - 1)) == 0 && (n % 3) == 1)
        {
            return true;
        }
        return false;
    
    
}
int main(int argc, char const *argv[])
{
    std::cout << four_degree(256);
    return 0;
}
