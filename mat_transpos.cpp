#include <iostream>
int** mat_init(int heigth, int width){
    int** mat = new int*[heigth];
    for (int i = 0; i < heigth; i++)
    {
        mat[i] = new int[width];
        for (int j = 0; j < width; j++)
        {
            std::cout << "Enter the " << j + 1 << " element : ";
            std::cin >> mat[i][j];
        }
    }
    return mat;
}
void print_mat(int**& mat, int heigth, int width)
{
    for (int i = 0; i < heigth; i++)
    {
        for (int j = 0; j < width; j++)
        {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
void tranpose(int**& mat, int heigth, int width)
{
    if (heigth != width)
    {
        std::cout << "Can't transpose this matrix";
        return;
    }
    
    for (int i = 0; i < heigth - 1; i++)
    {
        for (int j = i; j < width; j++)
        {   
            if (i != j)
            {
                int tmp = mat[j][i];
                mat[j][i] = mat[i][j];
                mat[i][j] = tmp;
            }
        }
    }
}
int main()
{
    const int heigth = 3;
    const int width = 3;
    int** mat = mat_init(heigth, width);
    print_mat(mat, heigth, width);
    tranpose(mat, heigth, width);
    print_mat(mat, heigth, width);
    return 0;
}
