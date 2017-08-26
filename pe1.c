/* Read input until '#' and counts spaces, new lines and other characters*/
#include<stdio.h>
#include<ctype.h>
int main(void)
{
	int sc=0,nc=1,oc=0;
	char ch;
	printf("Enter some characters with '#' at end:\n");
	while((ch=getchar())!='#')
	{
		if(ch=='\n')
		nc++;
		else if(isspace(ch) && ch!='\n')
		sc++;
		else
		oc++;
	}
	printf("\n*************************************\n");
	printf("new line    space    other charscters\n\n");
	printf("%-11d %-8d %-5d\n",nc,sc,oc);
	return 0;
}
		