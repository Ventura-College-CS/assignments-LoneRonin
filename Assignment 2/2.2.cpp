/* Make a function that prints all elements in "double" type array.
Use the function prototype below
Void printArray(double * const  n, int N)
Use the "double" constant pointer variable to access each element instead of array notation */

#include <iostream>
using namespace std;

void printArray(double * const, int);

int main(){
    const int N = 10;
    double number[N] = {10.0, 15.2, 21.2, 10.5, 11.3, 12.5, 13.8, 14.7, 19.8, 20.0};

    printArray(number, N);
}

void printArray(double * const n, int N) {
    double *ptr;
    ptr = n;

    for (int i = 0; i <= 9; i++) {
        cout << *(ptr+i) << endl;
    }
}