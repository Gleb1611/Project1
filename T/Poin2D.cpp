#include "Header1.h"
#include "Poin2D.h"

Poin2D::Poin2D() :x(0), y(0) {

}
Poin2D::Poin2D(int x, int y) : x(0), y(0) {

}

int Poin2D::getX() const
{
	return x;
}
int Poin2D::getY() const
{
	return y;
}
void Poin2D::setX(int x)
{
	this->x = x;
}
void Poin2D::setY(int y)
{
	this->y = y;
}
string Poin2D::getInfo()
{
	return "Point: x" + to_string(x) + ",y = " + to_string(y);
}
Poin2D Poin2D::operator -(Poin2D point) const
{
	int tx = x - point.x;
	int ty = y - point.y;
	Poin2D pointResult = Poin2D(tx, ty);

	return pointResult;
}

Poin2D Poin2D::operator +(Poin2D point) const
{
	int tx = x + point.x;
	int ty = y + point.y;
	Poin2D pointResult = Poin2D(tx, ty);

	return pointResult;
}
int Poin2D::operator *(Poin2D point) const
{
	return x * point.x + y * point.y;
}

Poin2D Poin2D::operator ++() {
	++y;
	++x;
	return *this;
}

Poin2D Poin2D::operator --() {
	--y;
	--x;
	return *this;
}

Poin2D Poin2D::operator ++(int)
{
	return Poin2D(x++, x--);
}

Poin2D Poin2D::operator --(int)
{
	return Poin2D(x++, x--);
}