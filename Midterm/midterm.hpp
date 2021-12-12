#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <string>
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
            //hmmmm maybe sstart on int main now
            scores.clear();
            for (int i = 0; i < 5; i++) {
                scores.pussh_back(sc[i]);
            }
};

template <class T, int capacity = 30>
class Stack {
    private:
        vector<T> S;
    public:
        Stack() {
            S.reserve(capacity);
        }
        Stack(int size) {
            S.reserve(size);
        }
        void push(T v) {
            S.push_back(v);
        }
        T pop() {
            T val = S.back();
            S.pop_back();
            return val;
        }
        T &topEl() {
            return S.back();
        }
        bool isEmpty() {
            return S.empty();
        }
};

#endif