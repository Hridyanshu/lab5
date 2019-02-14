#include<iostream>
using namespace std;
class student
{
	public:
		string name;
		int roll_no;
		int SAPID;
};
int main()
{
<<<<<<< HEAD
	student obj1;
	student obj2;
	obj1.name="XYZ";
	obj1.roll_no=123;
	obj2.name="PQR";
	obj2.roll_no=456;
	cout<<obj1.name<<endl<<obj1.roll_no<<endl<<obj2.name<<endl<<obj2.roll_no;
=======
	student obj;
	obj.name="XYZ";
	obj.roll_no=123;
	obj.SAPID=123456;
	cout<<obj.name<<endl<<obj.roll_no<<endl<<obj.SAPID;
>>>>>>> 64a763feb6398f047f86aac518f2f5c063026233
	return 0;
}

