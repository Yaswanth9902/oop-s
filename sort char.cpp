#include<iostream>
#include<string.h>
using namespace std;
class sort
{
	char a[10];
	int n,i,j,temp;
	public:
		void getdata()
		{
			cout<<"enter no.of inputs :";
			cin>>n;
		
		}
		void input()
		{
			
			for(i=1;i<=n;i++)
			{
				cin>>a[i];
			}
			cout<<"before sorting :";
			for(i=1;i<=n;i++)
			{
				cout<<"\n"<<a[i];
			}
		}
		void display()
		{
			cout<<"\nafter sorting :";
			for(i=1;i<=n;i++)
			{
				for(j=i+1;j<=n;j++)
				{
					if(a[i]<a[j])
					{
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}cout<<"\n"<<a[i];
			}
		}
};
int main()
{
	sort s;
	s.getdata();
	s.input();
	s.display();
}
