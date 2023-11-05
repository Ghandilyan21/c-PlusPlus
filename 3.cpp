#include <iostream>
void chlp(int* a, int* b, int n)
{
    for (int j = 0; j < n; ++j)
    {
        int mul = 1;
        for (int i = 0; i < n; ++i)
        {
            if (i != j)
            {
                mul *= a[i];
            }
            
        }
        b[j] = mul;
    }    
}
int main(int argc, char const *argv[])
{
    int a[5] = {1,2,3,4,5};
    int b[5]{};
    chlp(a,b,5);
    for (int i = 0; i < 5; i++)
    {
        std::cout << b[i] << " ";
    }
    
    return 0;
}
