#include<stdio.h>
int main()
{
	int i,f=1,n;
	printf("enter a number");
	scanf("%d",&n);
	if(n<0)
	printf("no factorial");
	else
	for(i=1;i<=n;i++)
		{
		f=f*i;
}
printf("the factorial is %d",f);
return 0;
}
