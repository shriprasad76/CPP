#include<iostream>
#include<conio.h>
class array{
	public:
		int a[5];
		int i;
		int large;
		void get()
		{
			std::cout<<"Enter 5 elements:";
			for(i=0;i<5;i++)
			{
				std::cin>>a[i];
				
			}
		}
		void disp()
		{
			large=a[0];
			for(i=1;i<5;i++)
			{
				if(a[i]>large)
				{
					large=a[i];
				}
			}
			std::cout<<"largest="<<large;
		}
};
int main()
{
	array s;
	s.get();
	s.disp();
}
