//c++����������������Ϊ����װ���̳С���̬
//�������ﶼΪ���󣬶������������Ժ���Ϊ
//������ͬ���ʵĶ��󣬿��Գ����Ϊ��
//
//��װ������
//1�������Ժ���Ϊ��Ϊһ�����壬���������е�����
//2�������Ժ���Ϊ����Ȩ�޿��� 
//
//���һ��Բ�ࡣ��Բ���ܳ�
//Բ���ܳ��Ĺ�ʽ 2*pi*�뾶
//
//class�������һ���࣬���������ŵľ���������
//#include<iostream>
//using namespace std;
//#define PI 3.14
//class Circle
//{
//	//����Ȩ��
//	//����Ȩ��
//public:
//	//����
//	//�뾶
//	int m_r;
//
//	//��Ϊ
//	//��ȡԲ���ܳ�
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//};
//int main()
//{
//	//ͨ��Բ�� ���������Բ������
//	//ʵ���� ��ͨ��һ���� ����һ������Ĺ��̣�
//
//	Circle c1;
//	c1.m_r = 10;
//	//��Բ���� �����Խ��и�ֵ
//	cout << c1.calculateZC() << endl;
//	return 0;
//
//
//}

//���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��
//#include<iostream>
//using namespace std;
//#include<string>
//class Students
//{
//	//����Ȩ��   ����Ȩ��
//public:
//	/*���е����Ժ���Ϊ ����ͳһ��Ϊ��Ա
//		���� ��Ա���� ��Ա����
//		��Ϊ ��Ա��Ϊ ��Ա����*/
//	//����
//	string name;
//	int num;
//	//��Ϊ
//	void showname()
//	{
//		cout <<"������" << name << endl;
//	}
//	void shownum()
//	{
//		cout <<"ѧ�ţ�" << num << endl;
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
//	s1.name ="����";
//	s1.num = 210212;
//	//��������Ϊ����и�ֵ����
//	s1.Setname("С��");
//	s1. Setnum(74751);
//	s1.showname();
//	s1.shownum();
//	
//	
//}


//��װ�����
//�������ʱ�����԰����Ժ���Ϊ���ڲ�ͬ��Ȩ���£����Կ���
//����Ȩ��������
//public ����Ȩ��        ��Ա ���ڿ��Է��� ������Է���
//protected ����Ȩ��          ���ڿ��Է��� ���ⲻ���Է���  ���ӿ��Է��ʸ��׵ı�������
//private ˽��Ȩ��            ���ڿ��Է��� ���ⲻ���Է���  ���Ӳ����Է��ʸ��׵�˽������

//struct ��class ����
//	struct Ĭ��Ȩ��Ϊ����  public
//	class Ĭ��Ȩ��Ϊ˽�� private

//��Ա��������Ϊ˽��
//�ŵ�1 �����г�Ա��������Ϊ˽�� �����Լ����ƶ�дȨ��

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
//	string m_name;//�ɶ���д
//	int age;//ֻ��
//	string m_lover;//ֻд
//};
//int main()
//{
//	person p1;
//	p1.setname("����");
//	cout<<"������" << p1.getname() << endl;
//	cout <<"���䣺" << p1.getage() << endl;
//	p1.setlover("С��");
//	return 0;
//}


//�ŵ�2 ����дȨ�ޣ����ǿ��Լ�����ݵ���Ч��
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
//			cout << "������ڹ꣡" << endl;
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
//	string m_name;//�ɶ���д
//	int age;//�ɶ���д
//	string m_lover;//ֻд
//};
//int main()
//{
//	person p1;
//	p1.setname("����");
//	p1.setage(204);
//	cout << "������" << p1.getname() << endl;
//	cout << "���䣺" << p1.getage() << endl;
//	p1.setlover("С��");
//	return 0;
//}

//����������� 
//������������������ 
//�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
//#include<iostream>
//#include<string>
//using namespace std;
//class cube
//{
//public:
//	void setH(int h)//����H
//	{
//		m_H = h;
//	}
//	int getH()//��ȡH
//	{
//		return m_H;
//	}
//	void setL(int l)//����L
//	{
//		m_L = l;
//	}
//	int getL()//��ȡL
//	{
//		return m_L;
//	}
//	void setW(int w)//����W
//	{
//		m_W = w;
//	}
//	int getW()//��ȡW
//	{
//		return m_W;
//	}
//	int area()//�������
//	{
//		return (m_H * m_L + m_H * m_W + m_L * m_W) * 2;
//	}
//	int volume()//�������
//	{
//		return m_H * m_L * m_W;
//	}
//	void compare(cube c1)//�Ƚ������������Ƿ����
//	{
//		if(m_H == c1.getH() && m_L == c1.getL() &&m_W == c1.getW())
//			cout << "�������������" << endl;
//		else cout << "���������岻���" << endl;
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
////		cout << "�������������" << endl;
////	else cout << "���������岻���" << endl;
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
//	cout<<"�����" << c1.area() << endl;
//	cout <<"�����" << c1.volume() << endl;
//	//cout <<"�����" << volume(c1.getH(), c1.getL(), c1.getW()) << endl;
//	//comparevolume(c1.getH(), c1.getL(), c1.getW(), c2.getH(), c2.getL(), c2.getW());
//	int ret = comparevolume(c1, c2);
//	if (ret == 1)
//	{
//		cout << "���" << endl;
//	}
//	else cout << "�����" << endl;
//	c1.compare(c2);
//}


//���һ��Բ�����һ�����࣬������Բ�Ĺ�ϵ��
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
//			cout << "��Բ��" << endl;
//		}
//		else if (sqrt(pow(x1 - p1.getx(), 2) + pow(y1 - p1.gety(), 2)) < m_R)
//		{
//			cout << "��Բ��" << endl;
//		}
//		else cout << "��Բ��" << endl;
//	}
//private:
//	double x1;//Բ�ĺ�����
//	double y1;//Բ��������
//	double m_R;//�뾶
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