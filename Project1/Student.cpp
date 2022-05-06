#include "Student.h"

int Student::count = 0;

Student::Student() {
	count++;
	name = "no name";
	age = 0;
	mark = 0;
	sex = 'm';
}

Student::Student(string name, int age, double mark, char sex) {
	count++;
	this->name = name;
	this->age = age;
	this->mark = mark;
	this->sex = sex;
}

Student::~Student() {
	count--;
}

int Student::getCount() {
	return count;
}

string Student::getName() {
	return name;
}

void Student::setName(string name) {
	this->name = name;
}

int Student::getAge() {
	return age;
}

void Student::setAge(int age) {
	if (age >= MIN_STUDENT_AGE
		&& age <= MAX_STUDENT_AGE) {
		this->age = age;
	}
}

double Student::getMark() {
	return mark;
}

void Student::setMark(double mark) {
	if (mark >= MIN_MARK && mark <= MAX_MARK) {
		this->mark = mark;
	}
}
char Student::getSex() {
	return sex;
}

void Student::setSex(char sex) {
	if (sex == 'm' || sex == 'f') {
		this->sex = sex;
	}
}

string Student::getInfo() {
	return name + ": age: " + to_string(age)
		+ "; mark: " + to_string(mark)
		+ "; sex: " + (sex == 'm' ? "male" : "female");
}