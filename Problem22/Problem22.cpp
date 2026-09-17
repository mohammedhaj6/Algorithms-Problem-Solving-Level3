#include <iostream>

using namespace std;

void getFibonacciNumber(int num, int prev1, int prev2)
{

    int febNum = 0;
    if (num > 0) {

        febNum = prev2 + prev1;
       
        prev2 = prev1;
        prev1 = febNum;
        cout << febNum << "  ";
        getFibonacciNumber(num - 1, prev1, prev2);
       }


   
}

int main()
{

    getFibonacciNumber(10, 0, 1);
}