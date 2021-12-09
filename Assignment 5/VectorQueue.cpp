#include <iostream>
#include "VectorQueue.hpp"
using namespace std;

template <class T, int size>
T VQueue<T, size>::dequeue() {
	T v = T();
	// T el{};
	if (!isEmpty()) {
		v = queue.front();
		queue.erase(queue.begin());
		return v;
	}
	else {
		cout << "Queue is Empty\n";
	}
	return v;
}
template <class T, int size>
void VQueue<T, size>::enqueue(T el) {
	if (!isFull())
		queue.push_back(el);
	else
		cout << "Queue is Full \n";
}

template <class T, int size>
bool VQueue<T, size>::isFull() {
	if (queue.size() == size)
		return true;
	else
		return false;
}
template <class T, int size>
bool VQueue<T, size>::isEmpty() {
	return queue.empty();
}

template<class T, int size>
VQueue<T, size>::VQueue() {
    this.size = size;
    queue.resize(size)
}