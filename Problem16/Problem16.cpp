#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>


using namespace std;

int randomNumber(int from, int to) {

    int randomNum = rand() % (to - from + 1) + from;
    return randomNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = randomNumber(0, 100);

        }
    }
}
void printMatrix(int arr[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            cout << setw(3) << arr[i][j] << "   ";


        }

        cout << "\n";
    }

}

bool checkIfSparseMatrix(int arr[3][3], int rows, int cols) {

    int zero = 0;
    int anyNumber = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j]==0) {
              
                zero++;
            }
            else {
                anyNumber++;
            }

        }
        
    }
    if (zero > anyNumber) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    srand((unsigned)time(NULL));

      /*int arr[3][3] = { {5,0,0},{0,5,0},{0,0,5} };*/
      int arr[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "Matrix 1: \n\n";
    printMatrix(arr, 3, 3);
    if (checkIfSparseMatrix(arr,3,3)) {
        cout << "\nYes: It is Sparse\n";
    }
    else {
        cout << "\nNo: It is Not Sparse\n";

    }
   
}

