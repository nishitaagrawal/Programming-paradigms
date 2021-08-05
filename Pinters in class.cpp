#include<iostream>
using namespace std;
class polygon
{
	protected:
		int width,height;
	public:
		void set_values(int a,int b)
		{
			width=a;
			height=b;
		}
		virtual int area()
		{
			return 0;
		}
};
class rectangle:public polygon
{
	public:
		int area()
		{
			return width*height;
		}
};
class triangle:public polygon
{
	public:
		int area()
		{
			return 0.5*width*height;
		}
};
int main()
{
	rectangle r;
	triangle t;
	polygon p;
	polygon *pptr1=&r;
	polygon *pptr2=&t;
	int choice,h,w;
	cout<<"MENU \nPress 1 to find area of rectangle \nPress 2 to find area of triangle.";
	cout<<"\nPress 3 to exit";
	while(choice!=3)
	{
		cout<<"\nEnter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case(1):cout<<"Enter height,width of rectangle : ";
					cin>>h>>w;
					pptr1->set_values(w,h);
					cout<<"The area of rectangle is : "<<pptr1->area()<<"\n";
					break;
			case(2):cout<<"Enter height,width of trangle : ";
					cin>>h>>w;
					pptr2->set_values(w,h);
					cout<<"The area of the triangle is : "<<pptr2->area()<<"\n";
					break;
			case(3):break;
			default:cout<<"Invalid choice";
		}
	}
}

