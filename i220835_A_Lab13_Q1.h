#pragma once
#include<iostream>
using namespace std;

class animal {
	string name;
	int age;

public:
	animal();

	string getName() {
		return name;
	}

	int getAge() {
		return age;
	}

	animal(string s, int y);

	void set_value(string s, int y);


};

class zebra :public animal {
	int height;
public:
	zebra(string s, int y, int h);
	int getHeight() {
		return height;
	}

};


class dolphin :public animal {
	int finLength;
public:
	dolphin(string s, int y, int h);
	int getFinL() {
		return finLength;
	}

};