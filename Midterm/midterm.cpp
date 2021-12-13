#include "midterm.hpp"
#include <iostream>

using namespace std;

class Student {
    private:
        int SID;
        string Sname;
        vector<double> scores;
    public:
        Student() : SID(0), Sname() {}
        Student(int i, string name, double *sc) {
            SID = i;
            Sname = name;
            for(int j = 0; j<5; j++) { // possible idea... prehave all 5 objects made in line 16 and then have it just run each object idv.
                scores.push_back(j); //come back to this to figure out how to have all 5
                                     //Sstudent Objectyss be pushed
            }
        }
        int getID() {
            return SID;
        }
        string getName() {
            return Sname;
        }
        vector<double> &getScores() {
            return scores;
        };
        void setID(int ID) {
            SID = ID;
        }
        void setName(string name) {
            Sname = name;
        }
        void setScores(double *sc) {
            scores.clear();
            for (int i = 0; i < 5; i++) {
                scores.push_back(sc[i]);
            }
};

int main () {
    Student s[5]; //Array of Class Students being initialized
    string name[] = {"Takeo", "Thy", "Yuumi", "Haru", "Irelia"}; //Array filled with nammes
    double scores[5][5] = {
        {87.0, 98.0, 100.0}, {100.0, 78.0, 65.0}, {100.0, 100.0, 100.0},
            {83.0, 90.0, 60.0},{92.0, 86.0, 100.0}
    };

    Student tmp;
    vector<double> C;
    Stack<Student, 10> CS;

   //need to take informtion from the Class and instead put it into a loop
   for (int i = 0; i < 5; i++) {
       s[i].setID(i);
       s[i].setName(name[i]);
       s[i].setScores(scores[i]);
       CS.push(s[i]);
   }
   
   //need to print out information 
   for (int i = 0; i < 5; i++) {
        tmp = CS.pop();
        CS = tmp.getScores(); //Something wrong with getter for scores
        cout << tmp.getID() << " " << tmp.getName() << endl;

        for (int j = 0; j < C.size(); j++) {
            cout << C[j] << endl;
        }
   }
    
}
//Needs to do for main
// initialize student array
// double array for scores
// push each sstudents info into queue
// pop and print all info