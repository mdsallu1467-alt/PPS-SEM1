#include<stdio.h>
void main()
{
int deci, bin=0,i=1,rem;
printf("Enter number in decimal");
scanf("%d",&deci);
while(deci!=0)
{
rem=deci%16;
bin=bin+rem*i;
i=i*10;
deci=deci/16;
}
printf("%d",bin);
}
