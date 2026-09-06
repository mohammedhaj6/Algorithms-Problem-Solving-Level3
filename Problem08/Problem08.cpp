#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>



using namespace std;


int randomNumber(int from, int to) {

    int randomNum = rand() % (to - from + 1) + from;
    return randomNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3] , int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
           arr[i][j] = randomNumber(1, 10);
          
        }
    }
}
void printMatrix(int arr[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
           
            printf(" %0*d ", 2, arr[i][j]);
            

        }

        cout << "\n";
    }
}

void multipleTowMatrix(int arr1[3][3], int arr2[3][3], int arr3[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr3[i][j] = arr1[i][j] * arr2[i][j];
        }

        
    }

}




int main()
{
    srand((unsigned)time(NULL));
    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];
    FillMatrixWithRandomNumbers(arr1, 3, 3);
    FillMatrixWithRandomNumbers(arr2, 3, 3);
    cout << "Matrix 1: \n\n";
    printMatrix(arr1, 3, 3);
    cout << "\nMatrix 2: \n\n";
    printMatrix(arr2, 3, 3);
    multipleTowMatrix(arr1, arr2, arr3, 3, 3);
    cout << "\nResults: \n\n";
    printMatrix(arr3, 3, 3);

}

