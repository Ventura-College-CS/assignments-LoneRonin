#include <iostream>
using namespace std;

class Course {
    private:
        int cId;
        string cName;
        int cCred;
    public:
        Course() : cId(0), cName(), cCred() {
            cId = id;
            cName = name;
            cCred = cred;
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

    int target = 0;

    cout << "Enter 0-9 to Search a Course Id: ";
    cin >> target;

    int n = sizeof(c)/sizeof(c[0]);
    int first = 0, last = n - 1;
    int result = BinSearch(c, first, last, target);

    if (result <= 9 || result == 0) {
        cout << "Course Name: " << c[target].getCName() << endl;
        cout << "Course Id: V0" << c[target].getCId() << endl;
        cout << "Course Credits: " << c[target].getCCred() << endl;
    }
    else {
        cout << "No Course with that Id Found";
    }

    return 0;
}