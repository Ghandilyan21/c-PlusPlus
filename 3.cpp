#include <iostream>
/*
kanchum e function Pixel tipi objecti vra
*/
struct Pixel
{
    int x;
    int y;
};
void foo(Pixel* arr,int size,  void (*ptr)(Pixel& ob));
void chlp(Pixel& obj);

int main(int argc, char const *argv[])
{
    Pixel ob1;
    ob1.x = 0;
    ob1.y = 0;
    Pixel ob2;
    ob2.x = 3;
    ob2.y = 4;
    Pixel ob3;
    ob3.x = 1;
    ob3.y = 2;
    const int size = 3;
    Pixel arr[size]{ob1,ob2,ob3};
    //void (*ptr)(Pixel&) = chlp;
    foo(arr, size, chlp);
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i].x << " " << arr[i].y << std::endl;
    }
    
    return 0;
}
void foo(Pixel* arr,int size,  void (*ptr)(Pixel& ob))
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i].x == 0 && arr[i].y == 0)
        {
            ptr(arr[i]);
        }
        
    }
    
}

void chlp(Pixel& obj)
{
    obj.x = 10;
    obj.y = 10;
}