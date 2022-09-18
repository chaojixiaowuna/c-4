#pragma once
#include<iostream>
#include"point.h"
using namespace std;
class circle
{
public:
	void setx(int x);
	double getx();
	void sety(int y);
	double gety();
	void setR(int r);
	double getR();
	void judgement(point p1);
private:
	 double x1;//Ô²ÐÄºá×ø±ê
	 double y1;//Ô²ÐÄ×Ý×ø±ê
	 double m_R;//°ë¾¶
};
