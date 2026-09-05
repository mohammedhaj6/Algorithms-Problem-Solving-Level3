#include <iostream>

using namespace std;

void fillMatrixWithOrderedNumbers(int arr[3][3], int rows, int cols) {
    int counter = 1;
    while (counter < 10) {
        for (int i = 0; i < rows; i++) {

            for (int j = 0; j < cols; j++) {


                arr[i][j] = counter;
                counter++;
            }
        }
    }





}

void printMatrix(int arr[3][3], int rows, int cols) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transposeMatrix(int arr[3][3],int arrTranspose[3][3], int rows, int cols) {

    
        for (int i = 0; i < rows; i++) {

            for (int j = 0; j < cols; j++) {

                arrTranspose[i][j] = arr[j][i];
                
              
            }
        
    }
}



int main()
{
    int arr[3][3];
    int arrTranspose[3][3];
    fillMatrixWithOrderedNumbers(arr, 3, 3);
    cout << "\nThe following is a 3x3 ordered matrix:\n";
    printMatrix(arr, 3, 3);
    transposeMatrix(arr, arrTranspose, 3, 3);
    cout << "\n\nThe following is the transposed matrix:\n";
    printMatrix(arrTranspose, 3, 3);


}

