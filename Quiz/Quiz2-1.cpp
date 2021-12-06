#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 

double *fillupArray(int N) {
    double *ptr;
    ptr = new double[N];

    srand(time(0));
    for(int i = 0; i < N; i++)
        *(ptr + i) = rand() % 100;
    return ptr;
}

void printArray(double *ptr, int N) {
    for(int i = 0; i < N; i++)
        cout << *(ptr + i) << "\t";
}

int main() {
    const int N = 10;
    double *ptr;

    ptr = fillupArray(N);
    printArray(ptr, N);
}
