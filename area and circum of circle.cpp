#include<iostream>
using namespace std;
class circle
{
	int r;
	float area=0,cir=0;
	public:
		void getdata()
		{
			cout<<"enter the radius of circle :";
			cin>>r;
		}
		void display()
		{
			area=3.14*r*r;
			cir=2*3.14*r;
	    cout<<"area :"<<area;
	    cout<<"\ncircumference :"<<cir;
		}
};
int main()
{
	circle s;
	s.getdata();
	s.display();
}
