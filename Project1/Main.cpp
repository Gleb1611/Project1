#include "Student.h" 
#include "Group.h" 
#include "Maneger.h" 

int main() {
	Group group("10b");
	Manager manager1("Mariya Ivanovna");

	Student st1("Alex", 14, 9, 'm');
	Student st2("Nastya", 13, 8, 'f');
	Student st3("Nikita", 15, 4, 'f');

	group.add(st1);
	group.add(st2);
	group.add(st3);

	cout << group.getInfo() << endl;



	return 0;
}