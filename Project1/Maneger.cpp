#include "Maneger.h" 

Manager::Manager(string name) {
	this->name = name;
}

double Manager::calculateAvgMark(Group group) {
	double avg = 0;

	for (int i = 0; i < group.getSize(); i++)
	{
		avg += group.get(i).getMark();
	}

	avg /= group.getSize();

	return avg;
}

double Manager::calculateAvgAge(Group group) {
	double avg = 0;

	for (int i = 0; i < group.getSize(); i++)
	{
		avg += group.get(i).getAge();
	}

	avg /= group.getSize();

	return avg;
}

int Manager::getCountOfMale(Group group) {
	int count = 0;
	for (int i = 0; i < group.getSize(); i++)
	{
		if (group.get(i).getSex() == 'm') {
			count++;
		}
	}

	return count;
}

int Manager::getCountOfFemale(Group group) {
	int count = getCountOfMale(group);
	return group.getSize() - count;
}