#ifndef VQUEUE_H
#define VQUEUE_H
#include <iostream>
#include <vector>
using namespace std;

template <class T, int size = 100>

class VQueue {
private:
	vector<T> queue;

public:
    T dequeue();
	void enqueue(T el);
	bool isFull();
	bool isEmpty();
    VQueue() {
		queue.reserve(size);
	}
};

#endif