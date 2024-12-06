#include<stdio.h>
int main()
{
	int a[50][50],b[50][50],c[50][50],i,j,m,n;
	
	printf("Enter the row and colum:");
	scanf("%d%d",&m,&n);
	
	
	printf("Enter the value for Matrix A:\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}


	printf("\n");
	
	printf("Enter the value for Matrix B:\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			
			c[i][j]=a[i][j]+b[i][j];
			
			printf("%d\t",c[i][j]);
		}
		
		printf("\n");
		
	}

	return 0;
	
}
