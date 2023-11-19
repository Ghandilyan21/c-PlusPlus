#include "functions.h"
#include <iostream>
void init(int *arr, const int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Enter the " << i + 1 << " element : ";
        std::cin >> arr[i];
    }
}
int *add_big_number(int *arr1, int *arr2, const int size)
{
    int sum{};
    int of{};
    int s2 = size + 1;
    int *res_arr = new int[s2];
    int j = s2 - 1;
    for (int i = size - 1; i >= 0; --i)
    {
        sum = arr1[i] + arr2[i];
        if (sum > 9)
        {
            res_arr[j] += (sum % 10);
            of = sum / 10;
            std::cout << "of = " << of;
            res_arr[j - 1] += of;
            of = 0;
            --j;
        }
        else if (sum == 9 && res_arr[j] != 0)
        {
            res_arr[j] = 0;
            res_arr[j - 1] = 1;
            --j;
        }
        else
        {
            res_arr[j] += sum;
            --j;
        }
    }
    return res_arr;
}
void print_big_number(int *arr, int size)
{
    if (arr[0] == 0)
    {
        std::cout << "  ";
    }
    else
    {
        std::cout << arr[0] << " ";
    }

    for (int i = 1; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
void print_arr(int *arr, int size)
{
    std::cout << "  ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}