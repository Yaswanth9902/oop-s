#include<iostream>
using namespace std;
class number
{
	int a[10],num,i,o=0,e=0;
	public:
		void getdata()
		{
			cout<<"enter the no.of input :";
			cin>>num; 
			cout<<"enter inputs:\n";
		}
		void input()
		{
			for(i=1;i<=num;i++)
			{
				cin>>a[i];
			}
		}
		void display()
		{
			cout<<"entered no.s are :";
			for(i=1;i<=num;i++)
			{
				cout<<"\n"<<i;
				if(i%2==0)
				e=e+i;
				else
				o=o+i;
			}
			cout<<"\nsum of even numbers :"<<e;
			cout<<"\nsum of odd numbers :"<<o;
		}
};
int main()
{
	number s;
		s.getdata();
		s.input();
		s.display();
}
