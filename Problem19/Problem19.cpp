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

int getMinimumNumberInMatrix(int arr[3][3], int rows, int cols) {

    int minNum = arr[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            if (arr[i][j]<minNum) {

                minNum = arr[i][j];
            }


        }

       
    }
    return minNum;

}
int getMaximumNumberInMatrix(int arr[3][3], int rows, int cols) {

    int maxNum = arr[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            if (arr[i][j] > maxNum) {

                maxNum = arr[i][j];
            }


        }


    }
    return maxNum;

}
int main()
{
    srand((unsigned)time(NULL));

    /*int arr[3][3] = { {5,0,0},{0,5,0},{0,0,5} };*/
    int arr1[3][3];
   
    FillMatrixWithRandomNumbers(arr1, 3, 3);
   
    cout << "\nMatrix 1: \n\n";
    printMatrix(arr1, 3, 3);
    cout << "\nMinimum Number is : " << getMinimumNumberInMatrix(arr1,3,3) << endl;
    cout << "\nMaximum Number is : " << getMaximumNumberInMatrix(arr1, 3, 3) << endl;
}

