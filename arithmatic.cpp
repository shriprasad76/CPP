#include<iostream>
#include<conio.h>
using namespace std;
class num{
	public:
		int a,b;
		int add,sub,multi,div;
		void get()
		{
			cout<<"Enter 2 numbers:";
		    cin>>a>>b;
		}
		void disp()
		{
			add=a+b;
			sub=a-b;
			multi=a*b;
			div=a/b;
			
			cout<<"\naddition="<<add;
			cout<<"\nsubstractin="<<sub;
			cout<<"\nmultiplication="<<multi;
			cout<<"\ndivision="<<div;
		}
};
int main()
{
	num s;
	s.get();
	s.disp();
}
