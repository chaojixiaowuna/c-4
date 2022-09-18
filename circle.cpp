#include"circle.h"
#include"point.h"
	void circle::setx(int x)
	{
		x1 = x;
	}
	double circle::getx()
	{
		return x1;
	}
	void circle::sety(int y)
	{
		y1 = y;
	}
	double circle::gety()
	{
		return y1;
	}
	void circle::setR(int r)
	{
		m_R = r;
	}
	double circle::getR()
	{
		return m_R;
	}
	 void circle::judgement(point p1)
	{
		//double b = (x1 - p1.getx()) ^ 2;
		//double a = ((x1 - p1.getx()) ^ 2 + (y1 - p1.gety()) ^ 2);
		if (sqrt(pow(x1 - p1.getx(), 2) + pow(y1 - p1.gety(), 2)) == m_R)
		{
			cout << "在圆上" << endl;
		}
		else if (sqrt(pow(x1 - p1.getx(), 2) + pow(y1 - p1.gety(), 2)) < m_R)
		{
			cout << "在圆内" << endl;
		}
		else cout << "在圆外" << endl;
	}
