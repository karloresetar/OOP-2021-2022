#pragma once
#include <iostream>
using namespace std;
class timer {
	int h;
	int m;
	double s;
public:
	/*int get_h();
	int get_m();
	double get_s();*/
	timer();
	timer(int h, int m, double s);
	timer& operator +=(const timer& t);
	friend timer& operator/=(timer&t ,int n);
	friend std::ostream& operator<<(std::ostream& os,const timer& tmr);
	bool operator <(const timer& tmr) const;
	friend timer& operator-(timer& tmr, timer tmr2);
	operator double();
};


class penalty
{
	int m;
public:
	penalty();
	penalty(int m);
	timer& operator()(timer& tmr);
};