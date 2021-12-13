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

int eval(int a; int b; char op) {
    int result;
    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            cout << "Operator Error" << endl;
            exit(0);
    }
    return result;
}

int isOp() {
    switch () {
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
    Stack<int, N> stack;
	char input;

	int opr1, opr2, result;

	for (int i = 0; i < postfix_exp.size(); i++)
	{
		input = postfix_exp[i];
		if (isdigit(input))
			stack.push(int(input) - offset);
		else if (isOperator(input))
		{
			opr1 = stack.pop();
			opr2 = stack.pop();
			result = evaluate(opr1, opr2, input);
			stack.push(result);
		}
	}
	cout << "The result of the expression is " << stack.pop() << endl;
}