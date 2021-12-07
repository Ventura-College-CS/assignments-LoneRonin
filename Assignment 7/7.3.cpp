/* Implement the binary search program with recursive version
    show all call sequences of recursive version
    eleborate the pros and cons of recursive verssion
*/

#include <iostream>
using namespace std;

int binarySearch(int [], int, int, int);

const int SIZE = 7; // Array size

int main() {
    int array[SIZE] = { 1, 3, 8, 42, 57, 73, 90};
    int target = 8; // number in array you are looking for
    int result; // result of binarySearch

    result = binarySearch(array, 0, SIZE - 1, target); // search for the target in the array

    //  display result of search
    if (result == -1)
        cout << "That number was not found in the array." << endl;
    else {
        cout << "That number was found at element " << result
            << " in the array." << endl;
    }
    return 0;
}

int binarySearch(int array[], int first, int last, int target) {
    int mid; // middle point of the search

    if (first > last)
        return -1;
    mid = (first + last)/2;
    if (array[mid] == target)
        return mid;
    if (array[mid] < target)
        return binarySearch(array, mid + 1, last, target);
    else
        return binarySearch(array, first, mid - 1, target);
}  

/*
    The binarySearch function peroforms a recursive binary search on range of 
    elements of an integer arrary that is passed through a parameter array.
    This method checks through the whole array to see whether or not the search
    value is held within and returns -1 if not within the array. This method since
    it iss going through a recursive call will take up more space and will typicaally run
    slower since it'ss condition is based on 1. whether the seaarch value is even
    held in the array and 2. how far that value is from the center of the array. 
*/