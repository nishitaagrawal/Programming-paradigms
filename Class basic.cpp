#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int roll;
	char name[15];
	int marks[5];
	float percent;
	public:
		void getdata(int p)
		{
			int i,s;
			cin>>roll;
			gets(name);
			for(i=0;i<p;i++)
			{
				cout<<"Enter subject "<<i+1<<" marks : ";
				cin>>marks[i];
			}
		}
		float calc(int p)
		{
			int i,sum;
			for(i=0;i<p;i++)
			{
				sum+=marks[i];
			}
			percent=sum/p;
		}
		void display()
		{
			
			cout<<"\n"<<roll<<"\t"<<name<<"\t"<<percent<<" %";
		}
}s[10];
int main()
{
	int n,i,p;
	cout<<"Enter the number of students : ";
	cin>>n;
	cout<<"enter the number of subjects \n";
	cin>>p;
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter student no "<<i+1<<" details (roll , name ) : ";
		s[i].getdata(p);
		s[i].calc(p);
	}
	cout<<"\nThe student details are : \n";
	cout<<"ROLL"<<"\t"<<" NAME"<<"\t"<<"PERCENTAGE";
	for(i=0;i<n;i++)
	{
		s[i].display();
	}
	
}

