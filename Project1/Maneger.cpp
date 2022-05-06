#include "Manager.h"

Manager::Manager(string name) {
	this->name = name;
}

double Manager::calculateAvgMark(Group group) {
	double avg = 0;

	for (int i = 0; i < group.size; i++)
	{
		avg += group.list[i].getMark();
	}

	avg /= group.size;

	return avg;
}

double Manager::calculateAvgAge(Group group) {
	double avg = 0;

	for (int i = 0; i < group.size; i++)
	{
		avg += group.list[i].getAge();
	}

	avg /= group.size;

	return avg;
}

int Manager::getCountOfMale(Group group) {
	int count = 0;
	for (int i = 0; i < group.size; i++)
	{
		if (group.list[i].getSex() == 'm') {
			count++;
		}
	}

	return count;
}

int Manager::getCountOfFemale(Group group) {
	int count = getCountOfMale(group);
	return group.size - count;
}