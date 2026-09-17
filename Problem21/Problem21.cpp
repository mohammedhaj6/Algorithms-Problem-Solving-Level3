#include <iostream>




using namespace std;


void printFibonacciSeriesOf10(int num) {

    int febNum = 0;
    int prev2 = 0;
    int prev1 = 1;
   
    cout << "1  ";

    for (int i = 0; i <= num-2;i++) {
        febNum = prev1 + prev2;
        cout << febNum <<"  ";
        prev2 = prev1;
        prev1 = febNum;
       
    }

}




int main()
{
    printFibonacciSeriesOf10(10);
}

