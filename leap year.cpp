#include<iostream>
using namespace std;
class leap
{
	int year;
	public:
		void getdata()
		{
			cout<<"enter the year :";
			cin>>year;
		}
		void display()
		{
			if(year%4==0)
			cout<<year<<" is a leap year";
			else
			cout<<year<<" is not a leap year";
		}
};
int main()
{
	leap s;
	s.getdata();
	s.display();
}
