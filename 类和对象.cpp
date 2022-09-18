//c++面向对象的三大特性为：封装、继承、多态
//万事万物都为对象，对象上有其属性和行为
//具有相同性质的对象，可以抽象称为类
//
//封装的意义
//1、将属性和行为作为一个整体，表现生活中的事物
//2、将属性和行为加以权限控制 
//
//设计一个圆类。求圆的周长
//圆求周长的公式 2*pi*半径
//
//class代表设计一个类，类后面紧跟着的就是类名称
//#include<iostream>
//using namespace std;
//#define PI 3.14
//class Circle
//{
//	//访问权限
//	//公共权限
//public:
//	//属性
//	//半径
//	int m_r;
//
//	//行为
//	//获取圆的周长
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//};
//int main()
//{
//	//通过圆类 创建具体的圆（对象）
//	//实例化 （通过一个类 创建一个对象的过程）
//
//	Circle c1;
//	c1.m_r = 10;
//	//给圆对象 的属性进行赋值
//	cout << c1.calculateZC() << endl;
//	return 0;
//
//
//}

//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
//#include<iostream>
//using namespace std;
//#include<string>
//class Students
//{
//	//访问权限   公共权限
//public:
//	/*类中的属性和行为 我们统一称为成员
//		属性 成员属性 成员变量
//		行为 成员行为 成员方法*/
//	//属性
//	string name;
//	int num;
//	//行为
//	void showname()
//	{
//		cout <<"姓名：" << name << endl;
//	}
//	void shownum()
//	{
//		cout <<"学号：" << num << endl;
//	}
//	void Setname(string name1)
//	{
//		name = name1;
//	}
//	void Setnum(int a)
//	{
//		num = a;
//	}
//};
//int main()
//{
//	Students s1;
//	s1.name ="李武";
//	s1.num = 210212;
//	//可以在行为里进行赋值操作
//	s1.Setname("小桀");
//	s1. Setnum(74751);
//	s1.showname();
//	s1.shownum();
//	
//	
//}


//封装意义二
//类在设计时，可以把属性和行为放在不同的权限下，加以控制
//访问权限有三种
//public 公共权限        成员 类内可以访问 类外可以访问
//protected 保护权限          类内可以访问 类外不可以访问  儿子可以访问父亲的保护内容
//private 私有权限            类内可以访问 类外不可以访问  儿子不可以访问父亲的私有内容

//struct 和class 区别
//	struct 默认权限为公共  public
//	class 默认权限为私有 private

//成员属性设置为私有
//优点1 将所有成员属性设置为私有 可以自己控制读写权限

//#include<iostream>
//#include<string>
//using namespace std;
//class person
//{
//public:
//	void setname(string name)
//	{
//		m_name = name;
//	}
//	string getname()
//	{
//		return m_name;
//	}
//	int getage()
//	{
//		int m_age = 0;
//		return m_age;
//	}
//	void setlover(string lo)
//	{
//		m_lover = lo;
//	}
//private:
//	string m_name;//可读可写
//	int age;//只读
//	string m_lover;//只写
//};
//int main()
//{
//	person p1;
//	p1.setname("老桀");
//	cout<<"姓名：" << p1.getname() << endl;
//	cout <<"年龄：" << p1.getage() << endl;
//	p1.setlover("小桀");
//	return 0;
//}


//优点2 对于写权限，我们可以检测数据的有效性
//#include<iostream>
//#include<string>
//using namespace std;
//class person
//{
//public:
//	void setname(string name)
//	{
//		m_name = name;
//	}
//	void setage(int ag)
//	{
//		if (ag < 0 || ag>150)
//		{
//			age = 0;
//			cout << "你个老乌龟！" << endl;
//			return;
//		}
//		age = ag;
//	}
//	string getname()
//	{
//		return m_name;
//	}
//	int getage()
//	{
//		//int age = 0;
//		return age;
//	}
//	void setlover(string lo)
//	{
//		m_lover = lo;
//	}
//private:
//	string m_name;//可读可写
//	int age;//可读可写
//	string m_lover;//只写
//};
//int main()
//{
//	person p1;
//	p1.setname("老桀");
//	p1.setage(204);
//	cout << "姓名：" << p1.getname() << endl;
//	cout << "年龄：" << p1.getage() << endl;
//	p1.setlover("小桀");
//	return 0;
//}

//设计立方体类 
//求出立方体的面积和体积 
//分别用全局函数和成员函数判断两个立方体是否相等
//#include<iostream>
//#include<string>
//using namespace std;
//class cube
//{
//public:
//	void setH(int h)//输入H
//	{
//		m_H = h;
//	}
//	int getH()//读取H
//	{
//		return m_H;
//	}
//	void setL(int l)//输入L
//	{
//		m_L = l;
//	}
//	int getL()//读取L
//	{
//		return m_L;
//	}
//	void setW(int w)//输入W
//	{
//		m_W = w;
//	}
//	int getW()//读取W
//	{
//		return m_W;
//	}
//	int area()//计算面积
//	{
//		return (m_H * m_L + m_H * m_W + m_L * m_W) * 2;
//	}
//	int volume()//计算体积
//	{
//		return m_H * m_L * m_W;
//	}
//	void compare(cube c1)//比较两个立方体是否相等
//	{
//		if(m_H == c1.getH() && m_L == c1.getL() &&m_W == c1.getW())
//			cout << "两个立方体相等" << endl;
//		else cout << "两个立方体不相等" << endl;
//	}
//private:
//	int m_H;
//	int m_L;
//	int m_W;
//};
////int volume(int h,int w,int l)
////{
////	return h * w * l;
////}
////void comparevolume(int l1, int w1, int h1, int l2, int w2, int h2)
////{
////	if (l1 == l2 && h1 == h2 && w1 == w2)
////		cout << "两个立方体相等" << endl;
////	else cout << "两个立方体不相等" << endl;
////}
//bool comparevolume(cube c1, cube c2)
//{
//	if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW())
//	{
//		return 1;
//	}
//	else return 0;
//}
//int main()
//{
//	cube c1;
//	c1.setH(10);
//	c1.setL(10);
//	c1.setW(10);
//	cube c2;
//	c2.setH(10);
//	c2.setL(10);
//	c2.setW(1);
//	cout<<"面积是" << c1.area() << endl;
//	cout <<"体积是" << c1.volume() << endl;
//	//cout <<"体积：" << volume(c1.getH(), c1.getL(), c1.getW()) << endl;
//	//comparevolume(c1.getH(), c1.getL(), c1.getW(), c2.getH(), c2.getL(), c2.getW());
//	int ret = comparevolume(c1, c2);
//	if (ret == 1)
//	{
//		cout << "相等" << endl;
//	}
//	else cout << "不相等" << endl;
//	c1.compare(c2);
//}


//设计一个圆形类和一个点类，计算点和圆的关系。
#include<iostream>
#include"point.h"
#include"circle.h"
using namespace std;
//class point
//{
//public:
//	void setx(int x1)
//	{
//		x = x1;
//	}
//	double getx()
//	{
//		return x;
//	}
//	void sety(int y1)
//	{
//		y = y1;
//	}
//	double gety()
//	{
//		return y;
//	}
//private:
//	double x;
//	double y;
//};
//class circle
//{
//public:
//	void setx(int x)
//	{
//		x1 = x;
//	}
//	double getx()
//	{
//		return x1;
//	}
//	void sety(int y)
//	{
//		y1 = y;
//	}
//	double gety()
//	{
//		return y1;
//	}
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	double getR()
//	{
//		return m_R;
//	}
//	void judgement(point p1)
//	{
//		//double b = (x1 - p1.getx()) ^ 2;
//		//double a = ((x1 - p1.getx()) ^ 2 + (y1 - p1.gety()) ^ 2);
//		if (sqrt(pow(x1 - p1.getx(),2)  + pow(y1 - p1.gety(),2) ) == m_R)
//		{
//			cout << "在圆上" << endl;
//		}
//		else if (sqrt(pow(x1 - p1.getx(), 2) + pow(y1 - p1.gety(), 2)) < m_R)
//		{
//			cout << "在圆内" << endl;
//		}
//		else cout << "在圆外" << endl;
//	}
//private:
//	double x1;//圆心横坐标
//	double y1;//圆心纵坐标
//	double m_R;//半径
//};

int main()
{
	circle c1;
	c1.setx(10);
	c1.sety(10);
	c1.setR(10);
	point p1;
	p1.setx(20);
	p1.sety(10);
	c1.judgement(p1);
	return 0;
}