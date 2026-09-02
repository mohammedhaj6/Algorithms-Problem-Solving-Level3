#include <iostream>
#include <string>
#include <iomanip>

using namespace std;




int randomNumber(int from, int to)
{
    
    int randNum = rand() % (to - from + 1) + from;
    return randNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short
    Cols)
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

int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    FillMatrixWithRandomNumbers(arr, 3, 3);
    PrintMatrix(arr, 3, 3);
   
}

