#include "i220835_A_Lab13_Q2.h"

Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}

string Date::getDate() {
	return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
}

int Date::getYear() const {
	return year;
}

int Date::getMonth() const {
	return month;
}

int Date::getDay() const {
	return day;
}

Employee::Employee(string n, string a, int id, Date d) :Name(n), Address(a), EmpID(id), HireDate(d){}

string Employee::getName()
{
	return Name;
}

string Employee::getAddress()
{
	return Address;
}

int Employee::getID()
{
	return EmpID;
}

string Employee::getdate()
{
	return HireDate.getDate();
}

ProductionWorker::ProductionWorker(string s, string a, int id, Date d, int sh, double payrate) :Employee(s, a, id, d), shift(sh), HPayRate(payrate) {

}

int ProductionWorker::getshift()
{
	return shift;
}

void ProductionWorker::setShift(int x)
{
	shift = x;
}

double ProductionWorker::getPayRate()
{
	return HPayRate;
}

double ProductionWorker::calcSalary(Date dt) {
	int TotalDays = 0;
	TotalDays += dt.getDay();
	TotalDays += dt.getMonth() * 30;
	TotalDays += dt.getYear() * 365;

	double sal;
	if (shift == 2) {
		sal = TotalDays * 8 * HPayRate * 1.5;
	}
	else {
		sal = TotalDays * 8 * HPayRate;
	}
	return sal;

}

TeamLeader::TeamLeader(string s, string a, int id, Date d, int sh, double payrate, int bonus, int hoursreq, int hoursatte) :ProductionWorker(s, a, id, d, sh, payrate) {
	monthlyBonusAmount = bonus;
	noOfHoursReq = hoursreq;
	noOfHoursAttended = hoursatte;

}

double TeamLeader::getsalary(Date dt) {
	double x = 0;
	x = calcSalary(dt);
	if (noOfHoursAttended >= noOfHoursReq) {
		x += monthlyBonusAmount;
	}
	return x;
}
