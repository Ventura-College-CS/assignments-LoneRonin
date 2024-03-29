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
            for(int j = 0; j<3; j++) { // possible idea... prehave all 5 objects made in line 16 and then have it just run each object idv.
                scores.push_back(j); //come back to this to figure out how to have all 5
                                     //Sstudent Objectyss be pushed
            }//thinking about it, I think this is fine
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
            for (int i = 0; i < 3; i++) {
                scores.push_back(sc[i]);
            }
        };  
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
       s[i].setID(i + 1000);
       s[i].setName(name[i]);
       s[i].setScores(scores[i]);
       CS.push(s[i]);
   }
   
   //need to print out information 
   // takes eaach piece of info of aan object and placess it into tmp for it to then be all printed out at once
   for (int i = 0; i < 5; i++) {
        tmp = CS.pop();
        C = tmp.getScores(); 
        cout << " ID: " << tmp.getID() << " Name : " << tmp.getName() << endl;

        for (int j = 0; j < C.size(); j++) {
            cout << " Score : " << C[j] << endl;
        }
   }
    
};