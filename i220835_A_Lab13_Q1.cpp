#include "i220835_A_Lab13_Q1.h"

animal::animal()
{
	{
		name = "";
		age = 0;
	}
}

animal::animal(string s, int y)
{
	{
		name = s;
		age = y;
	}
}

void animal::set_value(string s, int y)
{
	name = s;
	age = y;
}

zebra::zebra(string s, int y, int h) {
	set_value(s, y);
	height = h;
}

dolphin::dolphin(string s, int y, int h) : animal(s, y) {
	finLength = h;
}

