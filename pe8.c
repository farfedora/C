#include<stdio.h>
#define TAX1 0.15
#define TAX2 0.20
#define TAX3 0.25
#define BREAK1 300
#define BREAK2 450
#define BASE1 (BREAK1-(BREAK1*TAX1))
#define BASE2 (BASE1 +((BREAK2-BREAK1)-((BREAK2-BREAK1)*TAX2)))
void calculate (float payrate,float hour);

int main(void)
{
	float hour;
	int num;
	printf("Enter total work hours weekly:\n");
	scanf("%f",&hour);
	printf("\n************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1) $8.75/hr                            2) $9.33/hr\n");
	printf("3) $10.00/hr                           4) $11.20/hr\n");
	printf("5) quit!");
printf("\n************************************************************\n");
scanf ("%d",&num);
switch (num)
{
	case 1:
	calculate(8.75,hour);
	break;
	case 2:
	calculate(9.33,hour);
	break;
	case 3:
	calculate(10.00,hour);
	break;
	case 4:
	calculate(11.20,hour);
	break;
	default:
	break;
}
printf("\nits all done\n");

}
void calculate (float payrate,float hour)
{
float gross,net;

if (hour>40)
hour=hour+((hour-40)*1.5);

gross=hour*payrate;

if (gross<=BREAK1)
net=gross-(gross*TAX1);
else if (gross>BREAK1 && gross <=BREAK2)
net=BASE1+((gross-BREAK1)-((gross-BREAK1)*TAX2));
else
net=BASE2+((gross-BREAK2)-((gross-BREAK2)*TAX3));

printf("gross pay=%.2f\n",gross);
printf("net pay=%.2f\n",net);

}
