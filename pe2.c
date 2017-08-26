/* Read input until '#' and print prints ascii code of each character in 8 per row */

#include<stdio.h>
int main(void)
{
	char ch;
	int i=0;
	printf("Enter some characters with '#' at end:\n");
	while((ch=getchar())!='#')
	{
		i++;
		if(ch==' ')
		printf("'  '=%d  ",ch);
		else if(ch=='\n')
		printf("\\n=%d  ",ch);
		else
		printf("%c=%d  ",ch,ch);
		if(i%8==0)
		printf("\n");
	}
	return 0;
}