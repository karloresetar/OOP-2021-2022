#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void sort(T* v, int size)
{
	T temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (v[j] < v[i])
			{
				temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
		}
	}
}
template<>
void sort(char* v, int size)
{
	char temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (tolower(v[j]) < tolower(v[i]))
			{
				temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
		}
	}
}





int main()
{

	int array[6] = { 8, 22, 1, 3, 2, 9 };
	/*char array[6] = { 'A', 'b', 'C', 'd', 'a', 'k' };*/
	int size = sizeof(array) / sizeof(array[0]);
	sort(array, size);
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}