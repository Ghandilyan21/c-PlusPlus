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
    if (mat != nullptr)
    {
        for (int i = 0; i < heigh; i++)
        {
            for (int j = 0; j < length; j++)
            {
                std::cout << "Enter the " << i << " " << j << " element : ";
                std::cin >> mat[i][j];
            }
            
        };
        for (int i = 0; i < heigh; i++)
        {
            int max = mat[i][0];
            for (int j = 0; j < length; j++)
            {
                if (mat[i][j] > max)
                {
                    max = mat[i][j];
                }
                
            }
            std::cout << "Maximum in " << i << " row is : " << max << std::endl;
        }
        std::cout << std::endl;
        for (int i = 0; i < heigh; i++)
        {
            for (int j = 0; j < length; j++)
            {
                std::cout << mat[i][j] << " "; 
            }
            std::cout << std::endl;
        }
    }
    
    for (int i = 0; i < heigh; i++)
    {
        free(mat[i]);
    }
    free(mat);
    
    return 0;
}