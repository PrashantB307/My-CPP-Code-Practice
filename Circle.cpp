#include<iostream>
using namespace std;
class Circle
{
	int r;
	float a,circum;
	public:
		void get();
		void area();
		void circumf();
		void show();
};
void Circle::get()
{
	cout<<"Enter Radius:- "<<endl;
	cin>>r;
}
void Circle::area()
{
	a=(float)22/7*r*r;
}
void Circle::circumf()
{
	circum=(float)2*22/7*r;
}
void Circle::show()
{
	cout<<"Area is :- "<<a<<endl;
	cout<<"Circumference is :- "<<circum;
}
int main()
{
	Circle obj;
	obj.get();
	obj.area();
	obj.circumf();
	obj.show();
	return 0;
}
