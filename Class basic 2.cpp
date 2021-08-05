#include<iostream>
using namespace std;
class item
{
	int itemcode[20];
	int price[50];
	int count;
	public:
		void countzero()
		{
			count=0;
		}
		void getvalue()
		{
			cout<<"Enter item code : ";
			cin>>itemcode[count];
			cout<<"Enter itemprice : ";
			cin>>price[count];
			count++;
		}
		void dispsum()
		{
			int i,sum=0;
			for(i=0;i<=count;i++)
			{
				sum=sum+price[i];
			}
			cout<<"Total price = "<<sum;
		}
		void remove()
		{
			int i,code,c=0;
			cout<<"Enter the item code you want to delete : ";
			cin>>code;
			for(i=0;i<count;i++)
			{
				if(itemcode[i]==code)
				{
					count=count-1;
					for (int j=i; j<count; j++) 
					{
        				itemcode[j] = itemcode[j+1];
        				price[j]=price[j+1];
					}
					c++;
					cout<<"Item removed sucessfully";
				}
			}
			if(c==0)
			{
				cout<<"Invalid code";
			}
		}
		void dispitems()
		{
			int i;
			cout<<"CODE\tPRICE";
			for(i=0;i<count;i++)
			{
				cout<<"\n"<<itemcode[i]<<"\t"<<price[i];
			}
		}
}p;
int main()
{
	int choice;
	cout<<"MENU \nPress 1 to Add an item \nPress 2 to Display total value \nPress 3 to Delete an item";
	cout<<"\nPress 4 to Display all items \nPress 5 to Exit";
	p.countzero();
	while(choice!=5)
	{
		cout<<"\n\nEnter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case(1):p.getvalue(); break;
			case(2):p.dispsum();  break;
			case(3):p.remove();
					break;
			case(4):p.dispitems();
				    break;
			case(5):break;
			default:cout<<"Invalid choice";	
		}
	}
}
