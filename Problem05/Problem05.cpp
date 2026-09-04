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
            arr[i][j] = randomNumber(1, 100);
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

        cout << endl;
    }
}
int sumCols(int arr[3][3], int colNumber, int rows) {

    int sumCols = 0;
    for (int i = 0; i < rows; i++) {

        sumCols += arr[i][colNumber];
    }
    return sumCols;

}
void sumAllCols(int arr[3][3], int rows, int cols) {

    for (int i = 0; i < rows; i++) {
        cout << "\nCol " << i + 1 << " Sum = " << sumCols(arr, i, rows) << endl;
    }


}
void sumAllColsAndPushValuesToNewArray(int arr[3][3],int newArr[3],int rows) {

    for (int i = 0; i < rows;i++) {

       newArr[i] = sumCols(arr, i, rows);

    }


}
void printNewArray(int newArr[3],int rows) {
    cout << "\n\nThe New Array : " ;

    for (int i = 0; i < rows; i++) {

        cout << newArr[i] << "  ";
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    int newArr[3];
    FillMatrixWithRandomNumbers(arr,3,3);

    printMatrix(arr,3,3);
    sumAllColsAndPushValuesToNewArray(arr,newArr,3);

    printNewArray(newArr,3);



}

