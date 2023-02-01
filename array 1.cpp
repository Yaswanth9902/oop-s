#include<iostream>
using namespace std;
class number
{
	int a[10],i,n;
	public:
		void getdata()
		{
		cout<<"enter the no.of input\n";
		cin>>n;
	  	}
	  	void input()
	  	{
	  	cout<<"enter numbers:\n";
	  	for(i=1;i<=n;i++)
	  	{
	  		cin>>a[i];
        }
    }
        void display()
        {
        	cout<<"entered numbers :";
        	for(i=1;i<=n;i++)
        	{
        		cout<<"\n"<<a[i];
			}
		}

};
int main()
{
	number s;
	s.getdata();
	s.input();
	s.display();
}
