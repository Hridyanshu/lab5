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
	student obj;
	obj.name="XYZ";
	obj.roll_no=123;
	obj.SAPID=123456;
	cout<<obj.name<<endl<<obj.roll_no<<endl<<obj.SAPID;
	return 0;
}

