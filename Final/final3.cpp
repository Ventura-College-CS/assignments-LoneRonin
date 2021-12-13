#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Postfix
{
private:
    string expression;
    int isOperator(char);
    int calculate(int, int, char);

public:
    Postfix();
    Postfix(string);
    void setExp(string);
    void printExp() const;
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

int eval() {
    int result;
    switch () {
        case '+':
            break;
        case '-':
            break;
        case '*':
            break;
        case '/':
            break;
        default:
            cout << "Operator Error" << endl;
            exit(0);
    }
    return result;
}

int ops() {

}

int main() {

}