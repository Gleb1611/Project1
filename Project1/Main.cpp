#include "Student.h" 
#include "Group.h" 
#include "Manager.h" 
#include "Leader.h"

void testing(Student** list, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << list[i]->getInfo() << endl;
	}
}


int main() {
	const int SIZE = 2;

	//Student* student = new Student[SIZE];

	Student** list = new Student * [SIZE];

	list[0] = new Student("Alex", 15, 10, 'm');
	list[1] = new Leader("Nikita", 15, 4, 'f', "+375292655678", "TROLOLO@gmail.com");

	testing(list, SIZE);

	return 0;
}
