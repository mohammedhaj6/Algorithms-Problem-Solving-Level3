#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;



int randomNumber(int from , int to) {

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
int sumRow(int arr[3][3],int rowNumber , int cols) {

    int sumRow = 0;
   
        for (int j = 0; j < cols; j++) {
            sumRow += arr[rowNumber][j];
        }
    
    return sumRow;
}
void sumAllRows(int arr[3][3],int rows,int cols) {

    for (int i = 0; i < rows;i++) {
        cout << "\nRow " << i + 1 << " Sum = " << sumRow(arr, i, cols) << endl;
    }
}

    void sumAllRowsAndPushValuesToNewArray ( int arr[3][3], int newArr[3],int rows,int  cols) {
      
        
    for (int i = 0; i < rows;i++) {
        newArr[i] = sumRow(arr,i,cols);
     
    }
   
}
    void printNewArray(int newArr[3],int rows) {
        cout << "\n\nThe New Array : "<< endl;

        for (int i = 0; i < rows;i++) {
            cout << newArr[i] << " ";
        }
        cout << endl;
    }


int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    int newArr[3];
    FillMatrixWithRandomNumbers(arr,3,3);
    cout << "The following is a 3x3 random matrix : \n";
    printMatrix(arr, 3, 3);
    sumAllRows(arr,3,3);
    sumAllRowsAndPushValuesToNewArray(arr,newArr,3,3);
    printNewArray(newArr,3);
}

