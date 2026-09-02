#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;


int randomNumber(int from, int to)
{

    int randNum = rand() % (to - from + 1) + from;
    return randNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
 
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = randomNumber(1, 100);



        }

    }
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{

      
  
       for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "   ";
           

        }

        cout << "\n";
 
      
    }

}
int rowSum(int arr[3][3],short rowNumber,short Cols){
    int sum = 0;
    for (short j = 0; j < Cols ;j++) {

        sum += arr[rowNumber][j];
    }
    
    return sum;
}

void printAllRowSum(int arr[3][3],short rows, short Cols) {

    for (short i = 0; i < rows;i++) {
        cout << "\nRow " << i + 1 << " Sum = " << rowSum(arr, i, Cols)<<endl;
    }

}

int main()
{
   
    srand((unsigned)time(NULL));
    int arr[3][3];
    FillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "\n The following is a 3x3 random matrix:\n";
    PrintMatrix(arr, 3, 3);
    printAllRowSum(arr,3,3);
    system("pause>0");
   
  
}