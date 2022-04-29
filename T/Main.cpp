#include "Header1.h"
#include "Poin2D.h"

int main()
{
	Poin2D p1(4, 5);
	Poin2D p2(3, 9);
	Poin2D p3;

	int n = p1 * p2;

	cout << p1.getInfo() << endl;
	cout << p2.getInfo() << endl;
	cout << p3.getInfo() << endl;

	return 0;
}