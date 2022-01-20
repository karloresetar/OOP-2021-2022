#pragma once

template<typename T>
class Stack
{
	T* arr;
	int log_size;
	int capacity;
public:
	void push(T data);
	void pop();
	bool is_empty();
	Stack(int capacity);
	~Stack();
};