#include <stdio.h>
void main()
{
	int d,m,y;
	char* num[] = {"one","two","three", "four", "five", "six", "seven","eight", "nine"};
	char* month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "september", "October", "november", "December"};
	char* suffix1[] = {"ten","eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
	char* suffix2[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninty"};
	
	printf("Enter the date ");
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
			printf(" ");
		}
	}
	else if(d>20 && d<32)
	{
		int d1 = d%10;
		int num = d/10;
		int tens = num%10;
		//printf("%d",d1);
		printf(suffix2[tens-2]);
		printf(" ");
		//char rt = num[d1-1];
		//printf("%c",rt);
		if (d1 == 1)
		{
			printf("one ");
		}
		if (d1 == 2)
                {
                        printf("two ");
                }
		if (d1 == 3)
                {
                        printf("Three ");
                }
		if (d1 == 4)
                {
                        printf("four ");
                }
		if (d1 == 5)
                {
                        printf("Five ");
                }
		if (d1 == 6)
                {
                        printf("six ");
                }
		if (d1 == 7)
                {
                        printf("seven ");
                }
		if (d1 == 8)
                {
                        printf("eight ");
                }
		if (d1 == 9)
                {
                        printf("nine ");
                }
			
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
		printf(" ");
	}
	else
	{
		printf("Not a valid Month");
	}
	//calculating for year
	int y4 = y%10;
	int y_3 = y%100;
	int y3 = y_3/10;
	int y_2 = y3/10;
	int yn = y/100;
	int y2 = yn%10;
	int y1 = y/1000;
	//printf("%d,%d,%d,%d",y4,y3,y2,y1);
	printf(num[y1-1]);
	printf(" thousand ");
	if(y2==0)
	{
	    printf(" ");
	}
	else
	{
	    printf(num[y2-1]);
	    printf(" ");
	    
	}
	if(y2 == 0)
	{
	    printf(" ");
	}
	else
	{
	    printf(num[y2]);
	    printf("hundred ");
	}
	if(y3 == 0)
	{
	    printf(" ");
	}
	else
	{
	    printf(suffix2[y3-2]);
	    printf(" ");
	}
	printf(num[y4-1]);

}
