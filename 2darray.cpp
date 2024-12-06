//2d array
#include<math.h>
#include<stdio.h>
int main()
{
	int first[50][50],second[50][50],sum[50][50],i,j,m,n;
	
	printf("Enter the number of row and column:\n");
	scanf("%d%d",&m,&n);
	
	printf("Enter the elements for first martix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&first[i][j]);
	        
		}
	}
	printf("Enter the elements for second martix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&second[i][j]);
	        
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			sum[i][j]=first[i][j]*second[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
