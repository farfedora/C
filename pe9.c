/* Find prime numbers until and include entry */
#include<stdio.h>
int main(void)
{
	unsigned int start=1;
	unsigned int num,i;
	int flag;
	
	printf("Enter a number:\n");
	scanf("%u",& num);
	while(++start<=num)
	{
		flag=0;
		for(i=2;i<=start/2;i++)
		{
			if(start%i==0)
			{
		    	flag=1;
		    	break;
			}
		}
		if(flag==0)
			printf("%u\n",start);
	}
	return 0;
}
			