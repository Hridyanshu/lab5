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
	student obj;
	obj.name="XYZ";
	obj.roll_no=123;
	cout<<obj.name<<endl<<obj.roll_no<<endl;
	return 0;
}

