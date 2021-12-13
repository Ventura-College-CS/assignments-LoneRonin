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

int BinSearch() {

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

    // Now to create the Binary search part and the print results part

    int target = 0;

    cout << "Enter 0-9 to Search a Course Id: ";
    cin >> target;

    

    /*temp test loop
    for (int i = 0; i < 10; i++) {
        cout << "ID: " << C[i].getCId() << " Class: " << C[i].getCName() << " Credits: " << C[i].getCCred() << endl;
    }*/
}