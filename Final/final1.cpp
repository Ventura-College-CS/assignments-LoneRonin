#include <iostream>
#include <vector>
using namespace std;

class Course {
    private:
        int cId;
        string cName;
        int cCred;
    public:
        Course() : cID(0), cName(), cCred() {

        }
        int getCId() const {
            return cId;
        }
        string getCName() const {
            return cName;
        }
        int getCCred() const {
            return cCred;
        }
        void setCId(int id) {
            cId = id;
        }
        void setCName(string name) {
            cName = name;
        }
        void setCCred(int cred) {
            cCred = cred;
        }
};

int BinSearch(int array[], int first, int last, int target) { // need to edit to impliment with objects
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
    The BinSearch function performs a recursive binary search on range of 
    elements of an integer arrary that is passed through a parameter array.
    This method checks through the whole array to see whether or not the search
    value is held within and returns -1 if not within the array. This method since
    it iss going through a recursive call will take up more space and will typically run
    slower since it's condition is based on 1. whether the search value is even
    held in the array and 2. how far that value is from the center of the array. 
*/

int main() {
    Course C[10];
    string classes[] = {"Chemistry", "Algebra", "English", "Geometry", "Geography", "Biology",
    "Calculus", "Physics", "Literature", "Communication"};
    int Credits[10] = {6, 4, 5, 3, 2, 5, 4, 4, 3, 3};

    for (int i = 0; i < 10; i++) {
        C[i].setCId(i);
        C[i].setCName(classes[i]);
        C[i].setCCred(Credits[i]);
    }

    // Now to create the Binary search part and the print results part

    int target = 0;

    cout << "Enter 0-9 to Search a Course Id: ";
    cin >> target;

    int result = BinSearch(array, first, last, target);

    if (result <= 9 || result == 0) {
        
    }

    /*temp test loop
    for (int i = 0; i < 10; i++) {
        cout << "ID: " << C[i].getCId() << " Class: " << C[i].getCName() << " Credits: " << C[i].getCCred() << endl;
    }*/
}