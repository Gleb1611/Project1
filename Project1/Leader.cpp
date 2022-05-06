#include "Leader.h"

Leader::Leader() {
	setName("no name");
	setAge(0);
	setMark(0);
	setSex('m');
	phoneNumber = "no phone number";
	e_mail = "no e-mail";
}

Leader::Leader(string name, int age, double mark, char sex, string phoneNumber, string e_mail) {
	setName(name);
	setAge(age);
	setMark(mark);
	setSex(sex);
	this->phoneNumber = phoneNumber;
	this->e_mail = e_mail;
}

Leader::~Leader() {
}

string Leader::getPhoneNumber() {
	return phoneNumber;
}

void Leader::setPhoneNumber(string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

string Leader::getE_mail() {
	return e_mail;
}

void Leader::setE_mail(string e_mail) {
	this->e_mail = e_mail;
}

string Leader::getInfo() {
	return getName() + ": age: " + to_string(getAge())
		+ "; mark: " + to_string(getMark())
		+ "; sex: " + (getSex() == 'm' ? "male" : "female") + "; phonoeNumber = "
		+ getPhoneNumber() + "; e_mail = " + getE_mail();
}