#include<stdio.h>
int main()
{
	int A[5],i,key,s=0;
	printf("enter all 5 element\n");
	for(i=0;i<5;i++)
	scanf("%d",&A[i]);
	printf("enter searching element\n");
	scanf("%d",&key);
	for(i=0;i<5;i++)
	{
		if (key==A[i])
		{
			s=1;
		
		
		printf("Element found a %d",i+1);
		break;
	}
   }
    if(s==0)
		     printf("element not found");
	
	return 0;
}
