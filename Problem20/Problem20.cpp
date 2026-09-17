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
int isMatrixPalindrome(int arr1[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols / 2; j++)
        {
            if (arr1[i][j] != arr1[i][Cols - 1 - j])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[3][3] = { {1,2,1},{5,5,5},{7,3,7} };

   /* int arr1[3][3];

    FillMatrixWithRandomNumbers(arr1, 3, 3);*/

    cout << "\nMatrix 1: \n\n";
    printMatrix(arr1, 3, 3);
    if (isMatrixPalindrome(arr1,3,3)) {
        cout << "\nYes: Matrix is palindrome\n";
    }
    else {
        cout << "\nNo: Matrix is not palindrome\n";
    }

}

