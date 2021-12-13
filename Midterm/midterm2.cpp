#include <iostream>
#include <queue>
#include <vector>

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

class Compare {
    public:
        int operator()(const int &lhs, const int &rhs) {//Still need to change this so that it
                                                        //compares the sum of all the values of Student
            double lTotal, rTotal;
            lTotal = lhs;
            rTotal = rhs;
            return lTotal < rTotal;
        }
};

int main() {
    Student s[3]; //Array of Class Students being initialized
    string name[] = {"Takeo", "Thy", "Yuumi"}; //Array filled with nammes
    double scores[3][5] = {
        {87.0, 98.0, 100.0}, {100.0, 78.0, 65.0}, {100.0, 100.0, 100.0}
    };
    
}

//Create Student Objects with Id, Name, and 3 Scores
//Create the priority queue with object, data type, Commpare Class
//Push eacah student into the queue
//Print and pop top stuident