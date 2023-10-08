#include <iostream>
int** mat_init(int heigh, int length)
{
    int** mat = new int*[heigh];
    for (int i = 0; i < heigh; i++)
    {
        mat[i] = new int[length];
        for (int j = 0; j < length; j++)
        {
            std::cout << "Enter the " << i + 1 << " element : ";
            std::cin >> mat[i][j];
        }
        
    }
    return mat;
}
void print_mat(int**& mat, int heigh, int length)
{
    for (int i = 0; i < heigh; i++)
    {
        for (int j = 0; j < length; j++)
        {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
int** matrix_merge(int**& mat1, int**& mat2, int heigh, int length, int heigh1, int length1)
{
    int new_heigh = heigh + heigh1;
    int new_length = length + length1;
}
int main()
{
    int heigh = 0;
    int length = 0;
    std::cout << "Enter thr matrix heigh : ";
    std::cin >> heigh;
    std::cout << "Enter thr matrix length : ";
    std::cin >> length;
    int** mat = mat_init(heigh, length);
    print_mat(mat, heigh, length);
    return 0;
}