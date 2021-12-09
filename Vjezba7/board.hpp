typedef struct Point
{
private:
	double x;
	double y;
public:
	void set_x(double x);
	void set_y(double y);
	double get_x();
	double get_y();
	Point() : x(0), y(0) {};
	Point(double, double);
}Point;

class Board
{
private:
	char** board;
	int n;
	int m;

public:
	Board();
	Board(Board& b);
	Board(Board&& other) noexcept; // C26439 SPECIAL_NOEXCEPT warning
	Board(int a, int b);
	~Board();
	void display();
	void draw_char(Point& p, char ch);
	void draw_up_line(Point& p, char ch);
	void draw_line(Point& p1, Point& p2, char ch);

};

double distance2D(Point& p1, Point& p2);
double round1(double x);