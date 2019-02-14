#include<iostream>
using namespace std;
class conversion
{
	public:
		void abc()
		{
			int i,j,a[20],num;
			cout<<"Enter the decimal number to be converted in binary number:";
			cin>>num;
			cout<<endl;
			if (num==0)
			{
				cout<<"The decimal equivalent of "<<num<<"is "<<"0"<<endl;
			}
			else
			{
				for(i=0;num>0;i++)
				{
					a[i]=num%2;
					num=num/2;					
				}
				cout<<"The binary equivalent is"<<endl;
				for(j=i-1;j>=0;j--)
				{
					cout<<a[j];
				}
			}
		}
};
int main()
{
	conversion object;
	object.abc();
	return 0;
}
