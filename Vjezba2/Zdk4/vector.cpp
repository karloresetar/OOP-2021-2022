#include "vector.h"
using namespace std;

void MyVector::vector_new(size_t sz)
{
    cout << "Unesite velicinu vektora" << endl;
    cin >> sz;
    while (sz <= 0){
        cout << "Minimalna velicina vektora je 1 molimo vas ponovite unos " << endl;
        cin >> sz;
    }
    if ( sz >= 1 )
    {
        size = 0;
        capacity = sz;
        niz = new int[capacity];
        for (size_t i = 0; i < capacity ; i++)
            niz[i] = 0;
    }
}
void MyVector::vector_delete()
{
    delete[] niz;
    niz = 0;
    size = 0;
    capacity = 0;
}
void MyVector::vector_push_back(int n)
{
    niz[size] = n;
    size++;
    if (size == capacity)
    {
        int* pomocni = new int[capacity * 2];
        copy(niz, niz + capacity, pomocni);
        delete[] niz;
        niz = pomocni;
        capacity *= 2;
    }
}
void MyVector::vector_pop_back()
{
    niz[size] = 0;
    size--;
}
int& MyVector::vector_front()
{
    return niz[0];
}
int& MyVector::vector_back()
{
    return niz[size - 1];
}
size_t MyVector::vector_size()
{
    return size;
}


void MyVector::print_vector()
{
    for (size_t i = 0; i < vector_size(); ++i)
        cout << niz[i] << " ";
    cout << endl;
}