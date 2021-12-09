#include <iostream>
#include "board.hpp"
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	Point p1(2, 2), p2(8, 8),p3(8,2),p4(8,16);
	Board b1(20, 10);
	b1.draw_line(p1, p2, 'x');
	b1.draw_line(p3, p4, 'x');
	b1.display();

}