#include <iostream>
#include "Vjezba5.h"

using namespace std;

void dot::set_value(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void dot::set_random_value(double rand_min, double rand_max)
{
	this->x = rand_min + ((double)rand() / RAND_MAX) * (rand_max - rand_min);
	this->y = rand_min + ((double)rand() / RAND_MAX) * (rand_max - rand_min);
	this->z = rand_min + ((double)rand() / RAND_MAX) * (rand_max - rand_min);
}

double* dot::get_value(double arr[])
{
	arr[0] = x;
	arr[1] = y;
	arr[2] = z;

	return arr;
}

double dot::distance_2D(dot t)
{
	return sqrt(pow((x - t.x), 2) + pow((y - t.y), 2));
}

double dot::distance_3D(dot t)
{
	return sqrt(pow((x - t.x), 2) + pow((y - t.y), 2) + pow((z - t.z), 2));
}

double dot::get_z()
{
	return this->z;
}

double dot::get_x()
{
	return this->x;
}

void weapon::shoot()
{
	if (num_of_bullets > 0)
	{
		cout << "PUC PUC" << endl;
		num_of_bullets--;
	}
	else
	{
		cout << "Noo noo u dont hef bullets anymore, if you want to puc puc you hef to reload your weapon" << endl;
	}
}

void weapon::reload()
{
	
	num_of_bullets = reload_bullets;
	cout << "You hef reloaded zeh weapon, now you can PUC PUC" << endl;
	
}

void weapon::set_num_bullets(int num_of_bullets)
{
	this->num_of_bullets = num_of_bullets;
	this->reload_bullets = num_of_bullets;
}

const int weapon::get_num_bullets()
{
	return this->num_of_bullets;
}


void weapon::set_position_weapon(dot position)
{
	this->position = position;
}

double weapon::get_position_z()
{
	return this->position.get_z();
}

void weapon::target_hit(target target)
{
	if ((this->position.get_z() >= target.get_dlt().get_z()) && (this->position.get_z() <= target.get_gdt().get_z()) && (this->position.get_x() >= target.get_dlt().get_x()) && (this->position.get_x() <= target.get_gdt().get_x()))
	{
		this->num_of_hits += 1;
		target.hit();
	}
	else
	{
		target.not_hit();
	}
}

int weapon::get_num_target_hit()
{
	return this->num_of_hits;
}

void target::set_target(dot dlt, dot gdt)
{
	this->dlt = dlt;
	this->gdt = gdt;
}

void target::hit()
{
	cout << "Target is hit" << endl;
}

void target::not_hit()
{
	cout << "Target is not hit" << endl;
}

void target::set_num_of_target(int n) {
	this->num_of_targets = n;
}

dot target::get_dlt()
{
	return this->dlt;
}

dot target::get_gdt()
{
	return this->gdt;
}

string dot::print_dot()
{
	string s = "x: " + to_string(x) + " y: " + to_string(y) + " z: " + to_string(z);

	return s;
}











