#pragma once
#include "Header.h"
#include "Group.h"

class Manager
{
private:
	string name;
public:
	static const int MIN = 10;

	Manager(string name);

	double calculateAvgMark(Group group);
	double calculateAvgAge(Group group);
	int getCountOfMale(Group group);
	int getCountOfFemale(Group group);
};

