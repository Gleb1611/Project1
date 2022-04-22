#include "Header2.h"

class Point_2D
{
private:
	int x;
	int y;

public:
	Point_2D();
	Point_2D(int x, int y);

	int getX();
	int getY();
	void setX();
	void setY();
	string getInfo();

};

