#include<iostream>
using namespace std;
class student
{
	public:
		string name;
		int roll_no;
};
int main()
{
	student obj1;
	student obj2;
	obj1.name="XYZ";
	obj1.roll_no=123;
	obj2.name="PQR";
	obj2.roll_no=456;
	cout<<obj1.name<<endl<<obj1.roll_no<<endl<<obj2.name<<endl<<obj2.roll_no;
	return 0;
}

