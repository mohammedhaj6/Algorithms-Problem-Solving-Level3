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
int readNumberFromUser() {
    int num;
    cout << "\nEnter the number to count in matrix? ";
    cin >> num;
    return num;

}
int countNumberInMatrix(int arr[3][3], int rows, int cols,int numberFromUser) {
   
    int count = 0;
  
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            
            if (arr[i][j] == numberFromUser) {
                count++;
          }



        }
    }
    return count;
}

int main()
{
    srand((unsigned)time(NULL));

    /*  int arr[3][3] = { {5,0,0},{0,5,0},{0,0,5} };*/
    int arr[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "Matrix 1: \n\n";
    printMatrix(arr, 3, 3);
   int numFromUser =  readNumberFromUser();
   cout << "\nNumber " << numFromUser << " count in matrix is " << countNumberInMatrix(arr,3,3,numFromUser)<<endl;
}

