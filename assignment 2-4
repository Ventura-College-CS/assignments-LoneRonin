#include <iostream>
#include <fstream>
using namespace std;

const int MAX_LENGHT = 20;
const int NUM_SCORE = 3;

struct Student {
    int sid;
    char sname[MAX_LENGHT];
    double scores[NUM_SCORE];
};

Student *makeStudent(int);
void printStudent(Student * const, int);
void sortStudent(Student * const, int);

int main() {
    const int N = 10;
    Student *ptr;

    ptr = makeStudent(N);
    printStudent(ptr, N);
    cout << endl << "Student sorted by score sum" << endl;
    sortStudent(ptr, N);
    printStudent(ptr, N);
    delete ptr;
}

Student *makeStudent(int N) {
    ifstream ifs;
    Student *ptr = new Student[N];

    ifs.open("students.txt");
    if (ifs.fail()) {
        cerr << "Error unable to open file" << endl;
        exit(0);
    }

    for (int i = 0; i < N; i++) {
        ifs >> (ptr+i) ->sid >> (ptr+i)->sname;
        for (int j = 0; j < NUM_SCORE; j++) {
            ifs >> (ptr+i)->scores[j];
            if (ifs.fail()) {
                cerr << "File Read Error";
                exit(0);
            }
        }
    }
    ifs.close();
    return ptr;
}

void printStudent(Student * const ptr, int N) {
    for (int i = 0; i < N; i++) {
        cout << (ptr+i)->sid << "\t";
        cout << (ptr+i)->sname << "\t";
        for (int j = 0; j < NUM_SCORE; j++)
            cout << (ptr+i)-> scores[j] << "\t";
        cout << endl;
    }
}

void sortStudent(Student * const ptr, int N) {
    double *sumptr = new double[N]; 
    double sum;
    for (int i = 0; i < N; i++) {
        sum = 0;
        for (int j = 0; j < NUM_SCORE; j++)
            sum += (ptr+i)->scores[j];
        *(sumptr+i) = sum; 
    }
    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            if (*(sumptr+i) > *(sumptr+j)) {
                Student temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;  
                sum = *(sumptr+i); 
                *(sumptr+i) = *(sumptr+j);
                *(sumptr+j) = sum;
            }
        }
    }
    delete sumptr;
}
