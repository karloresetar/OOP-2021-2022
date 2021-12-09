#include <iostream>
#include "board.hpp"
#include <math.h>
#include <stdlib.h>

using namespace std;

Board::Board()
{
	n = 10;
	m = 10;
	board = new char* [n];
	for (int i = 0; i < n; i++)
		board[i] = new char[m];
}

void Board::display()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << board[i][j];
		}
		cout << endl;
	}
}

Board::Board(Board& b)
{
	n = b.n;
	m = b.m;
	board = new char* [n];
	for (int i = 0; i < n; i++)
		board[i] = new char[m];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			board[i][j] = b.board[i][j];
}

Board::Board(Board&& other) noexcept
{
	m = other.m;
	n = other.n;
	board = other.board;
}

Board::~Board()
{
	for (int i = 0; i < n; i++)
		delete[] board[i];

	n = 0;
	m = 0;
	delete[] board;
}

Board::Board(int a, int b)
{
	m = a;
	n = b;

	board = new char* [n];

	for (int i = 0; i < n; i++)
		board[i] = new char[m];


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
				board[i][j] = 'o';
			else
				board[i][j] = ' ';
		}
	}
}


void Board::draw_char(Point& p, char ch)
{
	if (p.get_x() >= (double)n - 1 || p.get_y() >= (double)m - 1)
	{
		return;
	}

	double a = round1(p.get_x()), b = round1(p.get_y());

	board[(int)a][(int)b] = ch;
}

void Board::draw_up_line(Point& p, char ch)
{
	if (p.get_x() >= (double)n - 1 || p.get_y() >= (double)m - 1)
	{
		return;
	}

	double a = round1(p.get_x()), b = round1(p.get_y());


	board[(int)a][(int)b] = ch;

	for (int i = (int)a; i > 0; i--)
		board[i][(int)b] = ch;
}

void Board::draw_line(Point& p1, Point& p2, char ch)
{
	if (p1.get_x() >= (double)n - 1 || p1.get_y() >= (double)m - 1 || p2.get_x() >= (double)n - 1 || p2.get_y() >= (double)m - 1)
		this->draw_char(p1, ch);
	this->draw_char(p2, ch);

	if (distance2D(p1, p2) <= 1.5)
		return;

	Point current, mini;
	current.set_x(round1(p1.get_x()));
	current.set_y(round1(p1.get_y()));

	mini.set_x(current.get_x() - 1);
	mini.set_y(current.get_y() - 1);

	while (distance2D(current, p2) > 1.5)
	{

		for (int i = (int)current.get_x() - 1; i <= (int)current.get_x() + 1; i++)
			for (int j = (int)current.get_y() - 1; j <= (int)current.get_y() + 1; j++)
			{
				if (i == (int)current.get_x() && j == (int)current.get_y())
					continue;

				Point t;
				t.set_x((double)i);
				t.set_y((double)j);

				if (distance2D(t, p2) <= distance2D(mini, p2))
				{

					if (distance2D(t, p2) + distance2D(t, p1) <= distance2D(mini, p2) + distance2D(mini, p1))
					{
						mini.set_x(t.get_x());
						mini.set_y(t.get_y());
					}

				}
			}


		this->draw_char(mini, ch);
		current.set_x(mini.get_x());
		current.set_y(mini.get_y());

		mini.set_x(current.get_x() + ((rand() % 2) - 1));
		mini.set_y(current.get_y() + ((rand() % 2) - 1));

	}


}

double round1(double x)
{
	if (x - (double)((int)x) >= 0.5)
		x++;

	return (double)((int)x);
}

// POINT 

double distance2D(Point& p1, Point& p2)
{
	return sqrt((p1.get_x() - p2.get_x()) * (p1.get_x() - p2.get_x()) + (p1.get_y() - p2.get_y()) * (p1.get_y() - p2.get_y()));
}

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

void Point::set_x(double x)
{
	this->x = x;
}

void Point::set_y(double y)
{
	this->y = y;
}

double Point::get_x()
{
	return x;
}
double Point::get_y()
{
	return y;
}

