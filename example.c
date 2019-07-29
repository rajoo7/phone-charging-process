#include <stdio.h>
void main()
{
	int d,m,y;
	char* num[] = {"one","two","three", "four", "five", "six", "seven","eight", "nine"};
	char* month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "september", "October", "november", "December"};
	char* suffix1[] = {"ten","eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
	char* suffix2[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninty"};
	printf("Enter the date");
	scanf("%d/%d/%d",&d,&m,&y);
	if(d<10)
	{
		printf(num[d-1]);
		printf(" ");
	}
	else if(d>9 && d<21)
	{
		if(d==20)
		{
			printf(suffix1[10]);
		}
		else
		{
			int unit = d%10;
			printf(suffix1[unit]);
		}
	}
	else if(d>20 && d<32)
	{
		int d1 = d%10;
		int num = d/10;
		int tens = num%10;
		printf("%d",d1);
		printf(suffix2[tens-2]);
		printf(" ");
		printf("%c",num[d1]);
	}
	/*else if(d>9)
	{
		int unit = d%10;
		int tens = d/10;
		printf(" ");
	}*/
	if(m<13)
	{
		printf(month[m-1]);
		printf("\n");
	}
	else
	{
		printf("Not a valid Month");
	}
							

}
