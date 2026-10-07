#include<stdio.h>

int main()
{
int deci,bin=0,i=1,rem;
printf("enter number in decimal");
scanf("%d",&deci);
while(deci!=0)
{
rem=deci%16;
deci=deci/16;
bin=bin+rem*i;
i=i*10;
        
}
printf("%d",bin);
return 0;
}
