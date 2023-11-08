#include <iostream>
/*
Poxum e zangvaci elementi ajeqy kanchelov function amen elementi vra
*/
void modify(int* arr, int size, void (*ptr)(int& val))
{
    for (int i = 0; i < size; ++i)
    {
        ptr(arr[i]);
    }
    
}
void change(int& val)
{
    val *= 2;
}
int main(int argc, char const *argv[])
{
    const int size = 7;
    int arr[size] = {1,2,3,4,5,6,7};
    void (*ptr)(int& val) = change;
    modify(arr,size, ptr);
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    
    return 0;
}
