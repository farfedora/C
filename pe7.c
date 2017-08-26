#include<stdio.h>
#define TAX1 0.15
#define TAX2 0.20
#define TAX3 0.25
#define BREAK1 300
#define BREAK2 450
#define BASE1 (BREAK1-(BREAK1*TAX1))
#define BASE2 (BASE1 +((BREAK2-BREAK1)-((BREAK2-BREAK1)*TAX2)))

int main(void)
{
float hour,gross,net;
printf("Enter all work hours weekly;\n");
scanf("%f",&hour);

if (hour>40)
hour=hour+((hour-40)*1.5);

gross=hour*10.00;

if (gross<=BREAK1)
net=gross-(gross*TAX1);
else if (gross>BREAK1 && gross <=BREAK2)
net=BASE1+((gross-BREAK1)-((gross-BREAK1)*TAX2));
else
net=BASE2+((gross-BREAK2)-((gross-BREAK2)*TAX3));

printf("gross pay=%.2f\n",gross);
printf("net pay=%.2f\n",net);

return 0;
}