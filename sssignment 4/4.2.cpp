/* Make for loop 100 times to
    call each search function with the target
    Target value should be selected in array randomly
        target = array[i] 0<i<64
        all values must be called after sortArray
    purpose of for loop is to average the comparison of numbers from linearSearch and binarySearch
results should be close to 64/2 and (1+6)/2 */

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void makeArray(int [], int);    //fill 64 elements with random numss between 1-100
int linearSearch(int [], int, int); //return value # of comparisons used to findd target
int binarySearch(int [], int, int); //return value # of comparisons used to findd target
void sortArray(int [], int);    // call before binarySearch
void printArray(int [], int);   //print array contents

int main(){
    const int N = 64;
    int array[N];
    int target;
    int total_linear, total_binary;

    srand(time(0));
    makeArray(array, N);
    printArray(array, N);

    for (int i=0; i<100; i++) {
        target = array[rand() % N];
        total_linear += linearSearch(array, N, target);
    }
    cout << "The average comparision numbers of Linear Search is " << total_linear / 100.0 << endl;

    sortArray(array, N);
    printArray(array, N);

    for(int i=0; i<100; i++) {
        target = array[rand() % N];
        total_binary += binarySearch(array, N, target);
    }
    cout << "The average comparision numbers of Binary Search is " << total_binary / 100.0 << endl;
}

void makeArray(int array[], int N) {
    for(int i=0; i<N; i++) 
        array[i] = rand() % 100 + 1;
}; 
int linearSearch(int array[], int N, int target) {
    int count;

    for(int i=0; i<N; i++) {
        count++;
        if (target == array[i])
            break;
    }
    return target;
}; 
int binarySearch(int array[], int N, int target) {
    int first, mid, last, count;

    first = 0;
    last = N-1;

    while (first <= last) {
        count++;
        mid = (first + last)/2;
        if (array[mid] == target) {
            return count;
            break;
        }
        if (array[mid] < target)
            last = mid-1;
        else
            first = mid+1;
    }
    return count;
}; 
void sortArray(int array[], int N) {
    int min, index;
    for(int i=0; i<N-1; i++) {
        for(int j=0; j<N-i-1; j++) {
            if (array[j] > array[j+1])
                swap(array[j], array[j+1]);
        }
    }
};
void printArray(int array[], int N) {
    for(int i=0; i<N; i++) {
        cout << array[i] << "\t";
        if (i % 8 == 7)
            cout << endl;
    }
};