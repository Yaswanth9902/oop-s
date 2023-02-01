#include<iostream>
using namespace std;
class sum
{
	int x,y;
	public:
		void getdata()
		{
			cout<<"enter the value of x and y\n";
			cin>>x>>y;
		}
		void display()
		{
		    cout<<"sum is :"<<x+y;
        }
};
int main ()
{
	sum s;
	s.getdata();
	s.display();
}
