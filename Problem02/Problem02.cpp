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
void FillMatrixWithRandomNumbers(int arr[3][3], short rows, short cols)
{
 
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            arr[i][j] = randomNumber(1, 100);



        }

    }
}
void PrintMatrix(int arr[3][3], short rows, short cols)
{

      
  
       for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            cout << setw(3) << arr[i][j] << "   ";
           

        }

        cout << "\n";
 
      
    }

}
int rowSum(int arr[3][3],short rowNumber,short cols){
    int sum = 0;
    for (short j = 0; j < cols ;j++) {

        sum += arr[rowNumber][j];
    }
    
    return sum;
}

void printAllRowSum(int arr[3][3],short rows, short cols) {

    for (short i = 0; i < rows;i++) {
        cout << "\nRow " << i + 1 << " Sum = " << rowSum(arr, i, cols)<<endl;
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
    
   
  
}