#include <iostream>
#include "vj10zad2.cpp"

using namespace std;

int main()
{
	Stack<int> stack(10);
	std::cout << "is_empty: " << stack.is_empty() << std::endl;
	stack.push(10);
	std::cout << "is_empty: " << stack.is_empty() << std::endl;
	stack.pop();
	std::cout << "is_empty: " << stack.is_empty() << std::endl;
	stack.pop();
	std::cout << "is_empty: " << stack.is_empty() << std::endl;
}