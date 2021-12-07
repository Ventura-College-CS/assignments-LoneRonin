/* Make for loop 100 times to
    call each search function with the target
    Target value should be selected in array randomly
        target = array[i] 0<i<64
        all values must be called after sortArray
    purpose of for loop is to average the comparison of numbers from linearSearch and binarySearch
results should be close to 64/2 and (1+6)/2
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void makeArray(int [], int);    //fill 64 elements with random numss between 1-100
int linearSearch(int [], int, int); //return value # of comparisons used to findd target
int binarySearch(int [], int, int); //return value # of comparisons used to findd target
void sortArray(int [], int);    // call before binarySearch

int main(){
    
}
