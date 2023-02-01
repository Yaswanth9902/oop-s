#include<iostream>
using namespace std;
class number
{
	int num;
	public:
	void getdata()
	{
		cout<<"enter the number :";
		cin>>num;
	}
	void display()
	{
		if(num%2==0)
		cout<<num<<" is even";
		else
		cout<<num<<" is odd";
	}
};
int main()
{
	number s;
	s.getdata();
	s.display();
}
