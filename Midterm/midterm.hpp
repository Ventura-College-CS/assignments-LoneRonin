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
        double scores;
    public:
        Student() : SID(0), Sname() {}
        Student(int i, string name, double *sc);
        int getID();
        string getName();
        double *getScores();
};

template <class T>
class Stack {
    Stack();

    void push(el: const T &);
    T pop();
    T &topEl();
    bool isEmpty();
    int size();
};

#endif