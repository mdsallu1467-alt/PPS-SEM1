#include<stdio.h>
int main ()
{
	int matrix[3][3],i,j,z=0,nz=0,sp[10][10];
	printf("enter 3X3 matrix elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;i++)
	{
		scanf("%d",&M[i][j]);
		if(M[i][j]==0)
		z++;
		else
		nz++;
	}
	
 }
	 printf("\n matrix is=\n ")
	 for(i=0;i<3;i++)
       {
       	for(j=0;j<3;j++)
       	printf("%d",M[i][j]);
       	
       	printf("\n");
	   }
		printf("no.of zeros=%d",z);
		printf("\n no.of non zeros element=%d",nz);
       if(z>nz)
             printf("\n matrix is sparse");
		else
		printf("\n given is  not a sparse");
		
}
