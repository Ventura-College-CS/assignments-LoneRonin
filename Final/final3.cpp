#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class PostfixExp
{
private:
    string expression;
    int isOperator(char);
    int calculate(int, int, char);

public:
    PostfixExp();
    PostfixExp(string);
    void setExpression(string);
    void printExpression() const;
    int Evaluation();
};

template<class T, int capacity=30>
class Stack
{

private:
    vector<T>  pool;
public:
    Stack() {
        pool.reserve(capacity);
    }
    Stack(int size) {
        pool.reserve(size);
    }
    T pop() {
        T val = pool.back();
        pool.pop_back();
        return val;
    }
    void push(T v) {
        pool.push_back(v);
    }
    T isEmpty() const {
        return pool.empty();
    }
    T &topEl() {
        return pool.back();
    }
};