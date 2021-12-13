#include <iostream>
#include <vector>
#include <queue>
#include <stack>
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

int eval(int num1, int num2, char op) {
    int result;
    switch (op) {
        case '+':
            result = num2 + num1;
            break;
        case '-':
            result = num2 - num1;
            break;
        case '*':
            result = num2 * num1;
            break;
        case '/':
            if(num1 == 0) {
                cout << "Cannot Divide by Zero" << endl;
                exit(0);
            }
            else
                result = num2 / num1;
            break;
        default:
            cout << "Operator Error" << endl;
            exit(0);
    }
    return result;
}

int isOp(char op) {
    switch (op) {
        case '+':
        case '-':
        case '*':
        case '/':
            return 1;
        default:
            return 0;
    }
}

int main() {
    const int offSet = 48;
    Stack<int, 30> stack;
    char input;
    string postExp;
    cout << "Enter a postfix expression:";
    cin >> postExp;

    int num1, num2, result;

    for (int i = 0; i < postExp.size(); i++)
    {
        input = postExp[i];
        if (isdigit(input))
            stack.push(int(input) - offSet);
        else if (isOp(input))
        {
            /*if (stack.size() < 2) {
                cout << "Error: Insufficient Operands" << endl;
                exit(0);
            }
            else {*/
                num1 = stack.pop();
                num2 = stack.pop();
                result = eval(num1, num2, input);
                stack.push(result);
            //}
        }
        else {
            cout << "Error: Invalid Input" << endl;
            exit(0);
        }
    }
    /*if (stack.size() > 1) {
        cout << "Error: Too Many Operands" << endl;
        exit(0);
    }*/
    //else
        cout << "The result of the expression is " << result << endl;
}