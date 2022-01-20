#include <iostream>
#include "vj10zad2.h"

using namespace std;

template <typename T>
inline void Stack<T>::push(T n)
{
	if (log_size == 0)
	{
		cout << "phail" << endl;
		exit(1);
	}
	else
	{
		log_size--;
		arr[log_size] = n;
	}
}

template<typename T>
inline void Stack<T>::pop()
{
	if (is_empty())
	{
		cout << "phail" << endl;
		exit(1);
	}
	else
	{
		log_size++;
	}
}

template <typename T>
inline bool Stack<T>::is_empty()
{
	if (log_size == capacity)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<typename T>
inline Stack<T>::Stack(int capacity)
{
	this->log_size = capacity;
	this->capacity = capacity;
	this->arr = new T[capacity];
}

template <typename T>
inline Stack<T>::~Stack()
{
	delete[] arr;
	arr = 0;
}