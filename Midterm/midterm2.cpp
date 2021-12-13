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
        void setScores(double S1, double S2, double S3) {
            scores.clear();
            scores.push_back(S1);
            scores.push_back(S2);
            scores.push_back(S3);
        };  
        //Set up print function to show all info for an object
        void print_S() {
            cout << " ID: " << SID << " Name : " << Sname << endl;

            for (int j = 0; j < 3; j++) {
                cout << " Score : " << scores[j] << endl;
            }
        };
};

class Compare {
    public:
        int operator()(const int &lhs, const int &rhs) {//Still need to change this so that it
                                                        //compares the sum of all the values of Student
            double lTotal, rTotal;
            vector<double> score;
            score = lhs.getScore();
            for (int i =0; i < score.size(); i++) {

            } 
            score = rhs.getScore();
            for (int i =0; i < score.size(); i++) {

            }
            return lTotal < rTotal;
        }
};

int main() {
    Student S1, S2, S3, pop_S;

//Create student objects
    S1.setID(1001);
	S1.setName("Takeo");
	S1.setScores(87.0, 98.0, 100.0);

	S2.setID(1002);
	S2.setName("Thy");
	S2.setScores(100.0, 100.0, 100.0);

	S3.setID(1003);
	S3.setName("Yuumi");
	S3.setScores(100.0, 78.0, 65.0);

//set up priority queue with object, data type, Commpare Class
    priority_queue<Student, vector<Student>, Compare> pq;

    pq.push(S1);
    pq.push(S2);
    pq.push(S3);

    while (!pq.empty()) {
        pop_S = pq.top();
        pop_S.print_S();
        pq.pop();
    }
}

//Create Student Objects with Id, Name, and 3 Scores
//Create the priority queue with object, data type, Commpare Class
//Push eacah student into the queue
//Print and pop top stuident