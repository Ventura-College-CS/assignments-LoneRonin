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
            for(int j = 0; j<5; j++) { // possible idea... prehave all 5 objects made in line 16 and then have it just run each object idv.
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
            for (int i = 0; i < 5; i++) {
                scores.push_back(sc[i]);
            }
        };  
};

class Compare {
    public:
        int operator()(const int &lhs, const int &rhs) {
            int lTotal, rTotal;
            lTotal = lhs;
            rTotal = rhs;
            return lTotal < rTotal;
        }
};

int main() {
    
}