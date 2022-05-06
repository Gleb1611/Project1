#include "Student.h"

class Leader
{
private:

	string phoneNumber;
	string e_mail;

public:
	Leader();
	Leader(string name, int age, double mark, char sex, string phoneNumber, string  e_mail);
	~Leader();

};

class Leader
{
private:
	string name;
	int age;
	int mark;
	char sex;
	string phoneNumber;
	string e_mail;
public:

	Leader();
	Leader(string name, int age, double mark, char sex, string phoneNumber, string  e_mail);
	~Leader();

	string getName();
	void setName(string name);

	int getAge();
	void setAge(int age);

	double getMark();
	void setMark(double mark);

	char getSex();
	void setSex(char sex);

	string getPhoneNumber();
	void setPhoneNumber(string phoneNumber);

	string getE_mail();
	void setE_mail(string e_mail);

	virtual string getInfo();
};

