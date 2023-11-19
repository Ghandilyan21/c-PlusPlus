#include <iostream>
#include "functions.h"
int main(int argc, char const *argv[])
{
    int s1{};
    std::cout << "Enter arrays size : ";
    std::cin >> s1;
    int *arr1 = new int[s1];
    int *arr2 = new int[s1];
    init(arr1, s1);
    init(arr2, s1);
    int *res_arr = add_big_number(arr1, arr2, s1);
    std::cout << std::endl;
    print_arr(arr1, s1);
    std::cout << "+" << std::endl;
    print_arr(arr2, s1);
    std::cout << "  ";
    for (int i = 1; i < 2 * s1; ++i)
    {
        std::cout << "-";
    }
    std::cout << std::endl;
    print_big_number(res_arr, s1 + 1);

    delete[] arr1;
    delete[] arr2;
    delete[] res_arr;
    return 0;
}
