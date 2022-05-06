#include "Student.h" 
#include "Group.h" 
#include "Manager.h" 
#include "Leader.h"

void testing(Student* st)
{
	cout << st->getInfo() << endl;
}

int main() {
	Student* st = new Student("Alex", 15, 10, 'm');
	testing(st);

	return 0;
}