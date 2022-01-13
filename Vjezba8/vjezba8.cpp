#include "vjezba8.h"
#include <iostream>
using namespace std;

timer::timer()
{
	this->h = 0;
	this->m = 0;
	this->s = 0;
}

timer::timer(int h,int m,double s)
{
	this->h = h;
	this->m = m;
	this->s = s;
}



timer& timer::operator +=(const timer& t)
{
	h += t.h;
	m += t.m;
	s += t.s;

	if (s >= 60)
	{
		s -= 60;
		m++;
	}

	if (m >= 60)
	{
		m -= 60;
		h++;
	}

	return *this;
}


timer& operator/=(timer& tmr, int n)
{
	tmr.h /= n;
	tmr.m /= n;
	tmr.s /= n;

	return tmr;
}


ostream& operator<<(ostream& os, const timer& tmr) {
	os << tmr.h << ":" << tmr.m << ":" << tmr.s << endl;
	return os;
}



bool timer::operator <(const timer& tmr)const
{
	return ((this->h < tmr.h) && (this->m < tmr.m) && (this->s < tmr.s));
}


timer& operator-(timer& tmr, timer tmr2)
{
	tmr.h -= tmr2.h;
	tmr.m -= tmr2.m;
	tmr.s -= tmr2.s;

	return tmr;
}

timer::operator double()
{
	return double(this->h * 3600 + this->m * 60 + this->s);
}

penalty::penalty()
{
	this->m = 0;
}

penalty::penalty(int m)
{
	this->m = m;
}


timer& penalty::operator()(timer& tmr)
{
	timer new_tmr(0, 0, this->m);
	tmr += new_tmr;
	return tmr;
}

