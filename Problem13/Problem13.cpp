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
            arr[i][j] = randomNumber(1, 9);

        }
    }
}
void printMatrix(int arr[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            cout << arr[i][j]<<"  ";


        }

        cout << "\n";
    }

}

bool checkIfIdentityMatrix(int arr[3][3],int rows ,int cols) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if  ( i==j && arr[i][j]!=1) {
                return false;
            }
            else if (i != j && arr[i][j] != 0) {
                return false;
            }
           
            

        }
    }
    return true;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3] = { {1,0,0},{0,1,0},{0,0,1} };
    
    /*FillMatrixWithRandomNumbers(arr, 3, 3);*/
    cout << "Matrix 1: \n\n";
    printMatrix(arr, 3, 3);
    if (checkIfIdentityMatrix(arr,3,3)) {
        cout << "\nYes: Matrix is identity\n";
    }
    else {
        cout << "\nNo: Matrix is not identity\n";
    }

}

