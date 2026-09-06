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

void printMiddleRow(int arr[3][3], int cols,int rows) {

    int middleRow = rows / 2;
 
        for (int j = 0; j < cols; j++)
        {

                printf(" %0*d ", 2, arr[middleRow][j]);
        }
    
}

void printMiddleCol(int arr[3][3], int rows,int cols) {

    int middleCol = cols / 2;

    for (int i = 0; i < rows; i++)
    {

        printf(" %0*d ", 2, arr[i][middleCol]);
    }

}


int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];
    FillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "Matrix 1: \n\n";
    printMatrix(arr, 3, 3);
    cout << "\n\nMiddle Row Of Matrix 1 is: \n\n";
    printMiddleRow(arr, 3,3);
   
    cout << "\n\nMiddle Col Of Matrix 1 is: \n\n";
    printMiddleCol(arr, 3,3);
}
