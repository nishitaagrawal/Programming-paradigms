#include<stdio.h>
#include<string.h>
#include<math.h>
int binary_to_decimal()  //convert binary to decimal value.
{
    int  num, binary_val, decimal_val = 0, base = 1, rem,count=0,val,n;
    printf("Enter a binary number(1s and 0s) : ");
    scanf("%d",&num);
    binary_val = num;
    n=num;
    while (num > 0)
    {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10 ;
        base = base * 2;
    }
    while(n!=0)  //check if no entered is binary or not
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
		printf("Invalid no \nIt is not a binary number ");	
	}
	else
	{
		printf("It is a binary number");
		printf("\nThe Binary number is = %d \n",binary_val);
    	printf("Its decimal equivalent is = %d \n",decimal_val);
	}
}
long decimal_to_binary()  //convert decimal to binary value.
{
    long binary_val = 0;
    int rem, temp = 1,decimal_val;
    printf("Enter a Decimal Number: ");
    scanf("%d",&decimal_val);
    while(decimal_val!=0)
    {
        rem = decimal_val % 2;
        decimal_val = decimal_val / 2;
        binary_val = binary_val + rem * temp;
        temp = temp * 10;
    }
    printf("Equivalent Binary Number is: %d",binary_val);
}
int octal_to_decimal()  //convert octal to decimal value.
{
    int decimal_val = 0;
    int rem, temp = 1,octal_val,val,count=0,n,num;
    printf("Enter a octal Number: ");
    scanf("%d",&octal_val);
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
		printf("Invalid no.\nThis is not an octal number");	
	}
	else
	{
		printf("It is an octal number");
		printf("\nThe Octal number is = %d \n",num);
    	printf("Its decimal equivalent is = %d \n",decimal_val);
	}
}
int decimal_to_octal()  //convert decimal to octal value.
{
    int  num, decimal_val, octal_val = 0, base = 1, rem;
    printf("Enter a decimal number : ");
    scanf("%d",&num);
    decimal_val = num;
    while (num != 0)
    {
        rem = num % 8;
        octal_val = octal_val + rem * base;
        num = num / 8 ;
        base = base * 10;
    }
    printf("The decimal number is = %d",decimal_val);
    printf("\nIts octal equivalent is = %d",octal_val);
}
int decimal_to_hex()   //convert decimal to hexadecimal value.
{
    int  num, decimal_val, base = 1, rem;
    char hex_val[10];
    int i=0,j;
    printf("Enter a decimal number : ");
    scanf("%d",&num);
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
    printf("The decimal number is = %d",decimal_val);
    printf("\nIts hexadecimal equivalent is = ");
    for(j=i-1;j>=0;j--)
    printf("%c",hex_val[j]);
}
int hex_to_decimal()
{
    int num=0;
    char hex[100]; 
    char hexdigit;
    int i=0;
    int len;
    printf("Enter hexadecimal number : "); 
    scanf("%s", hex); 
    len = strlen(hex);
    for(i=0; i<len; i++)
	{
		hexdigit = hex[len-i-1];
		if(hexdigit>='0' && hexdigit<='9')
		{
			num += (hexdigit-'0') * pow(16, i);
		}
        else if(hexdigit>='a'&& hexdigit<='f')
        {
        	num += (hexdigit-'a'+10) * pow(16, i);
		}
        else if(hexdigit>='A'&& hexdigit<='F')
        {
        	num += (hexdigit-'A'+10) * pow(16, i);
		}
        else
        {
        	printf("Invalid hexadecimal number.\n");
        	num=0;
        	break;
		}           
    }
    printf("Decimal number: %d", num);
}
int main()
{
	int choice,n;
	printf("MENU \n Press 1 to convert binary to decimal value. \n Press 2 to convert decimal to binary value.");
	printf("\n Press 3 to convert decimal to octal value. \n Press 4 to convert octal to decimal value.");
	printf("\n Press 5 to convert decimal to hexadecimal value. \n Press 6 to convert hexadecimal to decimal value. \n Press 7 to exit.");
	while(choice!=7)
	{
		printf("\n\nEnter the choice : ");
    	scanf("%d",&choice);
		switch(choice)
	   {
		case(1):binary_to_decimal(); break;
		case(2):decimal_to_binary();break;
		case(3):decimal_to_octal();break;
		case(4):octal_to_decimal();break;
		case(5):decimal_to_hex();break;
		case(6):hex_to_decimal();break;
		case(7):break;
		default: printf("Invalid choice");
	   }  
	}
	return 0;
}

