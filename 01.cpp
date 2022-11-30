#include<iostream>
using namespace std;
class Student
{
	int roll;
	char grade;
	float per;
	public:
		void get();
		void show();	
};
void Student::get()
{
	cout<<"Enter roll,grade and per";
	cin>>roll>>grade>>per;	
}
void Student::show()
{
	cout<<roll<<" "<<grade<<" "<<per;
}
int main()
{
	Student s;
	s.get();
	s.show();
	return 0;
}
