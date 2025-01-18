#include<iostream>
#include<conio.h>
class num{
	public:
	int n;
	int i;
	void get()
	{
	
	std::cout<<"enter number:";
	std::cin>>n;
}
void disp()
{
	

	for(i=1;i<=10;i++)
	{
		
		std::cout<<"\n"<<n*i;
	}
}
	
};
int main()
{
	num s;
	s.get();
	s.disp();
}
