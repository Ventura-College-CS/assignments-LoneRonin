#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

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