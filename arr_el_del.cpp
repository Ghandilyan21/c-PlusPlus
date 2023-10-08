#include <iostream>
void init(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
    std::cout << "Enter the " << i + 1 << " element : ";
    std::cin >> arr[i];
    }
}
int repeat(int* arr, int size)
{
    std::cout << std::endl << "Repeated elements" << std::endl;
    int c = 0;
    for (int i = 0; i < size; i++)   
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
           if (arr[i] == arr[j])
            {
                ++count;
            } 
        }
        if (count > 1)
        {
            std::cout << arr[i];
            ++c;
        }
        
    }
    return c;
}
int* copy(int*& arr, int& size, int count)
{
        int new_size = size - count;
        int* new_arr = new int[new_size];
        int index = 0;                    
        for (int i = 0; i < size; i++)
        {
                int ct = 0;
                for (int j = 0; j < size; j++) 
                {
                    if (arr[i] == arr[j])
                        {
                            ++ct;
                        } 
                }
            if (ct == 1)
            {
                new_arr[index] = arr[i];
                ++index;
            }
        }
        delete[] arr;
        arr = nullptr;
        size = new_size;
        return new_arr;
}
void print(int* arr, int size)
{
    std::cout << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i];
    }
}
int main()
{
    int size = 0;
    std::cout << "Enter array size : ";
    std::cin >> size;
    int* arr = new int[size];
    init(arr, size);
    std::cout << "Your array is" << std::endl;
    print(arr,size);
    int count = repeat(arr, size);
    std::cout << std::endl << "Repeat count : " << count;
    int* new_arr = copy(arr, size, count);
    std::cout << std::endl << "New array : ";
    print(new_arr, size);
    delete[] new_arr;
    return 0;
}