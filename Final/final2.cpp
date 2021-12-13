#include <iostream>
using namespace std;

class Course {
    private:
        int cId;
        string cName;
        int cCred;
    public:
        Course() : cId(0), cName(), cCred() {
            
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

void swap(int *A, int *B) {
    int x = *A;
    *A = *B;
    *B = x;
}
int partition(int C[], int first, int last) {
    int pivot = C[last];
    int i = (first - 1);

    for (int j = first; j <+ last - 1; j++) {
        if (C[j] <= pivot) {
            i++;
            swap(&C[i], &C[j]);
        }
    }
    swap(&C[i + 1], &C[last]);
    return (i + 1);
}
void QSort(int C[], int first, int last) {
    if (first < last) {
        int pivot = partition(C, first, last);

        QSort(C, first, pivot - 1);
        QSort(C, pivot + 1, last);
    }
}

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

    int n = sizeof(C)/sizeof(C[0]);
    //
    QSort(C, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << i + 1 << ": " << C[i] << endl;
}