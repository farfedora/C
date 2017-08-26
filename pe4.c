/* Read input until '#'. Replace each '.' with '!' and '!' with '!!'. */
#include<stdio.h>
int main(void)
{
	char ch;
	printf("Enter characters up to '#':\n");
	while((ch=getchar())!='#')
	{
		if(ch=='.')
		putchar('!');
		else if (ch=='!')
		{
			putchar(ch);
			putchar(ch);
		}
		else
		putchar(ch);
	}
	return 0;
}