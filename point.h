#pragma once
#include<iostream>
using namespace std;
class point
{
public:
	void setx(int x1);
	double getx();
	void sety(int y1);
	double gety();
private:
	double x;
	double y;
};