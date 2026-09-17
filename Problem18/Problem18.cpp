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

bool checkIfNumberExistsInMatrix(int arr[3][3], int rows, int cols, int number) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            if (arr[i][j] == number)return true;



        }


    }
    return false;
}

void printTheIntersectedNumbersInTwoMatrices(int arr1[3][3],int arr2[3][3], int rows, int cols) {

    int number;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            number = arr1[i][j];

            if (checkIfNumberExistsInMatrix( arr2, 3, 3, number)) {

                
                cout <<  setw(3) << number << "   ";
            }


        }

        
    }
}


int main()
{
    srand((unsigned)time(NULL));

    /*int arr[3][3] = { {5,0,0},{0,5,0},{0,0,5} };*/
    int arr1[3][3];
    int arr2[3][3];
    FillMatrixWithRandomNumbers(arr1, 3, 3);
    FillMatrixWithRandomNumbers(arr2, 3, 3);
    cout << "\nMatrix 1: \n\n";
    printMatrix(arr1, 3, 3);
    cout << "Matrix 2: \n\n";
    printMatrix(arr2, 3, 3);
    cout << "\n Intersected Numbers are: \n\n";
    printTheIntersectedNumbersInTwoMatrices(arr1,arr2,3,3);
  

}

