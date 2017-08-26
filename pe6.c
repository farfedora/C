/* Read up to '#'. Count 'ei's accures */
#include<stdio.h>
int main(void)
{
	char ch;
	char perv='\n';
	int i=0;
	
	printf("Enter characters up to '#':\n");
	while((ch=getchar())!='#')
	{
		if(ch=='i' && perv=='e')
		i++;
		perv=ch;
	}
	printf("count of 'ei' accurs are %d times,",i);
	return 0;
}