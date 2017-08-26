// Exercise 4 but with switch 
#include<stdio.h>
int main(void)
{
	char ch;
	printf("Enter characters up to '#':\n");
	while((ch=getchar())!='#')
	{
		switch (ch)
		{
			case '.':
			putchar('!');
			break;
			case '!':
			putchar(ch);
			putchar(ch);
			break;
			default:
			putchar(ch);
		}
	}
	return 0;
}