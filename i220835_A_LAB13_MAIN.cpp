#include"i220835_A_Lab13_Q1.h"
#include"i220835_A_Lab13_Q2.h"
#include<iostream>
using namespace std;

int main() {

	cout << "QUESTION 1" << endl << endl;
	zebra z1("monty", 2, 6);
	dolphin d1("dolphin1", 3, 4);

	cout << "Zebra Attributes : \n";
	cout << "NAME : " << z1.getName() << endl;
	cout << "AGE : " << z1.getAge() << endl;
	cout << "HEIGHT : " << z1.getHeight() << endl;
	cout << endl;
	cout << "Dolphin Attributes : \n";
	cout << "NAME : " << d1.getName() << endl;
	cout << "AGE : " << d1.getAge() << endl;
	cout << "FIN LENGTH : " << d1.getFinL() << endl;



	cout << "QUESTION 2\n\n";
	Date date1(1, 2, 0);
	Date date2(1, 2, 0);
	char name[10] = { "Saad" };

	ProductionWorker p1("Massab", "H11", 02, date2, 1, 25);

	cout << "Production worker : " << endl;
	cout << "NAME : " << p1.getName() << endl;
	cout << "ADDRESS : " <<p1.getAddress() << endl;
	cout << "ID : " << p1.getID() << endl;
	cout << "HIRING DATE : " << p1.getdate() << endl;
	cout << "SHIFT : ";
	if (p1.getshift() == 2) {
		cout << "Night" << endl;
	}
	else {
		cout << "Day" << endl;
	}
	cout << "HOURLY PAYRATE " << p1.getPayRate() << endl;
	cout<<"SALARY: "<< p1.calcSalary(date2) << endl;
	cout << endl;


	TeamLeader t1("Saad", "E8", 1, date1, 2, 15, 50, 20, 21);
	cout << "TEAM LEADER : " << endl;
	cout << "NAME : " << t1.getName() << endl;
	cout << "ADDRESS : " << t1.getAddress()<< endl;
	cout << "ID : " << t1.getID()<< endl;
	cout << "HIRING DATE : " << t1.getdate() << endl;
	cout << "SHIFT : ";
	if (t1.getshift() == 2) {
		cout << "Night" << endl;
	}
	else {
		cout << "Day" << endl;
	}
	cout << "HOURLY PAYRATE " << t1.getPayRate()<< endl;
	cout << "BONUS : " << t1.getBonus() << endl;
	cout << "HOURS ATTENDED : " << t1.getHoursAtten() << endl;
	cout << "HOURS REQUIRED : " << t1.getHoursReq() << endl;
	cout << "SALARY : " << t1.getsalary(date1) << endl;



}