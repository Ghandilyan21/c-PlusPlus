#include <iostream>
void mul_arr(int* arr, int* arr1, int size)
{
    if (size < 1)
    {
        return;
    }
    mul_arr(arr, arr1, size - 1);
    std::cout << (arr[size - 1] * arr1[size - 1]) << std::endl;
}
void init(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
    std::cout << std::endl;
}
int main()
{
    int size = 0;
    std::cout << "Enter array size : ";
    std::cin >> size;
    int* arr = new int[size];
    int* arr1 = new int[size];
    init(arr, size);
    init(arr1, size);
    mul_arr(arr,arr1,size);
    delete[] arr;
    delete[] arr1;
    return 0;
}