#include <iostream>
int* adjacent_find(int* first, int* end)
{
    while (first != (end - 2))
    {
        if (*first == *(first + 1) && *(first + 1) == *(first + 2))
        {
            return first;
        } 
        ++first;
    }
    return nullptr;
}
int main(int argc, char const *argv[])
{
    int arr[6]{1,16,16,16,5,7};
    std::cout << *(adjacent_find(arr, arr + 7));
    return 0;
}
