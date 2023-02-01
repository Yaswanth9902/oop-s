#include<iostream>
#include<math.h>
using namespace std;
class interest
{
	int p,n,r;
	float si=0,ci=0;
	public:
	void getdata()
	{
		cout<<"enter principle amount :";
		cin>>p;
		cout<<"enter time period in years :";
		cin>>n;
		cout<<"enter rate of interest :";
		cin>>r;
	}	
	void display()
	{
		si=(p*n*r)/100;
		ci=p*pow((1+r/100),n);
		cout<<"simple intrest is :"<<si;
		cout<<"\ncompound intrest is :"<<ci;
	}
};
int main()
{
	interest s;
	s.getdata();
	s.display();
}
