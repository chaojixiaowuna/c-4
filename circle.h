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
	 double x1;//Բ�ĺ�����
	 double y1;//Բ��������
	 double m_R;//�뾶
};
