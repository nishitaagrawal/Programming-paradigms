#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		void input()
		{
			cout<<"Enter the real and img part : ";
			cin>>real>>img;
		}
		complex operator ++()
		{
			complex t; 
       	 	t.real=real++;
			t.img=img++; 
       		return t;
		}
		void operator ++(int)
		{
			++real;
			++img;
		}
		friend complex operator +(complex &a,complex &b);
		friend bool operator <(complex &a,complex &b);
		void display()
		{
			cout<<"\nComplex : "<<real<<" + "<<img<<"i";
		}
};
complex operator +(complex &a,complex &b)
{
	complex s;
	s.real=a.real+b.real;
	s.img=a.img+b.img;
	return s;
}
bool operator <(complex &a,complex &b)
	{
		if(a.real<b.real && a.img<b.img)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
int main()
{
	int choice;
	complex a,b,c,d,e;
	cout<<"MENU \nPress 1 for Prefix increment \nPress 2 for Postfix increment";
	cout<<"\nPress 3 to add 2 objects \nPress 4 to compare 2 objects \nPress 5 to exit";
	while(choice!=5)
	{
		cout<<"\n\nEnter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case(1):a.input();
					a.display();
					cout<<"\nAfter prefix increment : ";
					++a;
					a.display();
					break;
			case(2):d.input();
					d.display();
					cout<<"\nAfter postfix increment : ";
					e=d;
					e++;
					d.display();
					e.display();
					break;
			case(3):a.input();
					b.input();
					c=a+b;
					c.display();
					break;
			case(4):a.input();
					b.input();
					if(a < b)
					{
						cout<<"A is less than B";
						a.display();					
					}
					else
					{
						cout<<"B is less than A";
					}
					break;
			case(5):break;
			default:cout<<"Invalid operation";
		}
	}
}
