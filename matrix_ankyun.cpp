#include <iostream>
#include <stdlib.h>
int main(){
    int length = 0;
    int heigh = 0;
    std::cout << "Enter matrix length : ";
    std::cin >> length;
    std::cout << "Enter matrix heigh : ";
    std::cin >> heigh;
    int** mat = (int**)malloc(heigh * sizeof(int*));
    for (int i = 0; i < heigh; i++)
    {
        mat[i] = (int*)malloc(length * sizeof(int));
    }
    for (int i = 0; i < heigh; i++)
    {
        for (int j = 0; j < length; j++)
        {
            std::cout << "Enter the " << i << " " << j << " element : ";
            std::cin >> mat[i][j];
        }
    }
    std::cout << "Unmodyfied matrix" << std::endl;
    for (int i = 0; i < heigh; i++)
    {
        for (int j = 0; j < length; j++)
        {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
    // for (int i = 0; i < heigh; i++)
    // {
    //     for (int j = 0; j < length; j++)
    //     {
    //         if (mat[i][j] % 2 == 0)
    //         {
    //             mat[i][j] = 0;
    //         }   
    //     }
    // }
    //std::cout << "Modyfied matrix" << std::endl;
    int sum = 0;
    for (int j = 0; j < (heigh / 2); j++)
    {
        for (int i = j + 1 ; i < length - j - 1; i++)
        {
           
            std::cout << mat[i][j];
                //sum += mat[i][j];
        
        }
        // std::cout << std::endl;
    }
    //std::cout << "Sum is : " << sum << std::endl;
    for (int i = 0; i < heigh; i++)
    {
        free(mat[i]);
    }
    free(mat);
    return 0;
}