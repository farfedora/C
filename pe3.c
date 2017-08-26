/* Read input until 0. the program count evens and odds. and also evaluate average of evens and odds */

#include<stdio.h>
int main(void)
{
	int num;
	int odd=0,even=0;
	int oddsum=0,evensum=0;
	printf("Enter some numbers(0 at end):\n");
	while(scanf("%d",&num)==1 && num!=0)
	{
		if(num%2==0)
		{
			even++;
			evensum+=num;
		}
		else
		{
			odd++;
			oddsum+=num;
		}
	}
	printf("\ndone\n");
	printf("****************************************\n");
	printf("odds    evens    odds ave.    evens ave.\n");
	printf("%-7d %-8d %-12d %-10d\n",odd,even,oddsum/odd,evensum/even);
	return 0;
}