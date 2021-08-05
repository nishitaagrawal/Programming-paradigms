#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int binary_to_decimal()  //convert binary to decimal value.
{
    int  num, binary_val, decimal_val = 0, base = 1, rem,count=0,val,n;
    cout<<"Enter a binary number(1s and 0s) : ";
    cin>>num;
    binary_val = num;
    n=num;
    while (num > 0)
    {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10 ;
        base = base * 2;
    }
    while(n!=0)
    {
    	val=n%10;
    	if((val!=1)&&(val!=0))
    	{
    		count++;
    		break;
		}
		n=n/10;
    }
	if(count>0)
	{
		cout<<"Invalid no \nIt is not a binary number ";	
	}
	else
	{
		cout<<"It is a binary number";
		cout<<"\nThe Binary number is = "<<binary_val<<" \n";
    	cout<<"Its decimal equivalent is = "<<decimal_val<<"\n";
	}
}
long decimal_to_binary()  //convert decimal to binary value.
{
    long binary_val = 0;
    int rem, temp = 1,decimal_val;
    cout<<"Enter a Decimal Number: ";
    cin>>decimal_val;
    while(decimal_val!=0)
    {
        rem = decimal_val % 2;
        decimal_val = decimal_val / 2;
        binary_val = binary_val + rem * temp;
        temp = temp * 10;
    }
    cout<<"Equivalent Binary Number is: "<<binary_val;
}
int octal_to_decimal()  //convert octal to decimal value.
{
    int decimal_val = 0;
    int rem, temp = 1,octal_val,val,count=0,n,num;
    cout<<"Enter a octal Number: ";
    cin>>octal_val;
    n=octal_val;
    num=octal_val;
    while (octal_val!=0)
    {
        rem = octal_val % 10;
        octal_val = octal_val / 10;
        decimal_val = decimal_val + rem * temp;
        temp = temp * 8;
    }
    
    while(n!=0)
    {
    	val=n%10;
    	if((val==8)||(val==9))
    	{
    		count++;
    		break;
		}
		n=n/10;
    }
	if(count>0)
	{
		cout<<"Invalid no.\nThis is not an octal number";	
	}
	else
	{
		cout<<"It is an octal number";
		cout<<"\nThe Octal number is = "<<num<<" \n";
    	cout<<"Its decimal equivalent is = "<<decimal_val<<"\n";
	}
}
int decimal_to_octal()  //convert decimal to octal value.
{
    int  num, decimal_val, octal_val = 0, base = 1, rem;
    cout<<"Enter a decimal number : ";
    cin>>num;
    decimal_val = num;
    while (num != 0)
    {
        rem = num % 8;
        octal_val = octal_val + rem * base;
        num = num / 8 ;
        base = base * 10;
    }
    cout<<"The decimal number is = "<<decimal_val;
    cout<<"\nIts octal equivalent is = "<<octal_val;
}
int decimal_to_hex()   //convert decimal to hexadecimal value.
{
    int  num, decimal_val, base = 1, rem;
    char hex_val[10];
    int i=0,j;
    cout<<"Enter a decimal number : ";
    cin>>num;
    decimal_val = num;
    while (num != 0)
    {
    	rem=0;
        rem = num % 16;
        if(rem<10)
        {
        	hex_val[i]=rem+48;
        	i++;
		}
		else
		{
			hex_val[i]=rem+55;
			i++;
		}
        num = num / 16 ;
    }
    cout<<"The decimal number is = "<<decimal_val;
    cout<<"\nIts hexadecimal equivalent is = ";
    for(j=i-1;j>=0;j--)
    cout<<hex_val[j];
}
int hex_to_decimal()  //convert hexadecimal to decimal value.
{
    int decimal_val = 0,val,i,len,count=0;
    char hex_val[10];
    cout<<"Enter a hex Number: ";
    cin>>hex_val;
    len=strlen(hex_val);
    len--;
    for(i=0;hex_val[i]!='\0';i++)
    {
    	if(hex_val[i]>='0' && hex_val[i]<='9')
    	{
    		val=hex_val[i]-48;
    		count++;
		}
		else if(hex_val[i]>='a' && hex_val[i]<='f')
        {
            val=hex_val[i]-97+10;
            count++;
        }
        else if(hex_val[i]>='A' && hex_val[i]<='F')
        {
            val = hex_val[i]-65+10;
            count++;
        }
        else
        {
        	cout<<"Invalid no. \nIt is not hexadecimal number\n";
        	decimal_val=0;
        	break;
		}
        decimal_val+=val*pow(16,len);
        len--;
    }
    cout<<"Equivalent decimal Number is: "<<decimal_val;
}
int main()
{
	int choice,n;
	cout<<" MENU \n Press 1 to convert binary to decimal value. \n Press 2 to convert decimal to binary value.";
	cout<<"\n Press 3 to convert decimal to octal value. \n Press 4 to convert octal to decimal value.";
	cout<<"\n Press 5 to convert decimal to hexadecimal value. \n Press 6 to convert hexadecimal to decimal value.";
	cout<<" \n Press 7 to exit.";
	while(choice!=7)
	{
		cout<<"\n\nEnter the choice : ";
    	cin>>choice;
		switch(choice)
	   {
		case(1):binary_to_decimal(); break;
		case(2):decimal_to_binary();break;
		case(3):decimal_to_octal();break;
		case(4):octal_to_decimal();break;
		case(5):decimal_to_hex();break;
		case(6):hex_to_decimal();break;
		case(7):break;
		default:cout<<"Invalid choice";
	   }  
	}
	return 0;
}

