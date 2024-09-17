#pragma once

#include<iostream>
#include <string>
using namespace std;

class Date {
protected:
	int day;
	int month;
	int year;

public:
	Date(int, int, int);
	string getDate();

	int getDay() const;
	int getMonth() const;
	int getYear() const;
};

class Employee {
	string Name;
	string Address;
	int EmpID;
	Date HireDate;

public:
	Employee(string n, string a, int id, Date d);

	string getName();
	string getAddress();
	int getID();
	string getdate();

};

class ProductionWorker :public Employee {
	int shift;
	double HPayRate;

public:
	ProductionWorker(string s, string a, int id, Date d, int sh, double payrate);
	int getshift();
	void setShift(int x);

	double getPayRate();

	double calcSalary(Date dt);

};


class TeamLeader : public ProductionWorker {
	int monthlyBonusAmount;
	int noOfHoursReq = 50;
	int noOfHoursAttended;

public:
	TeamLeader(string s, string a, int id, Date d, int sh, double payrate, int bonus, int hoursreq, int hoursatte);

	double getsalary(Date dt);

	int getBonus() {
		return monthlyBonusAmount;
	}

	int getHoursReq() {
		return noOfHoursReq;
	}

	int getHoursAtten() {
		return noOfHoursAttended;
	}
};