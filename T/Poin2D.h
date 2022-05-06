#include "Header1.h"

class Poin2D
{
private:
	int x;
	int y;
public:
	Poin2D();
	Poin2D(int x, int y);

	int getX() const;
	int getY() const;
	void setX(int x);
	void setY(int x);
	string getInfo();

	Poin2D operator +(Poin2D point) const;
	Poin2D operator -(Poin2D point) const;

	Poin2D operator ++();
	Poin2D operator --();

	Poin2D operator ++(int);
	Poin2D operator --(int);

	int operator *(Poin2D point) const;

};

