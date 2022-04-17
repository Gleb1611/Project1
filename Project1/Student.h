#pragma once 
#include "Header.h" 

class Student {
private:
	static int count;

	string name;
	int age;
	int mark;
	char sex;

public:
	static const int MIN_MARK = 0;
	static const int MAX_MARK = 10;

	static const int MIN_STUDENT_AGE = 13;
	static const int MAX_STUDENT_AGE = 80;

	Student();
	Student(string name, int age, double mark, char sex);
	~Student();

	static void getCount();

	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	double getMark();
	void setMark(double mark);
	char getSex();
	void setSex(char sex);

	string getInfo();
};