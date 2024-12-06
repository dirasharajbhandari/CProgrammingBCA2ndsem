#include<stdio.h>

int main()
{
		int first[100][100],second[100][100],add[100][100];
		int m,n,p,q,i,j;
		
		
		printf("Enter the size of row and column for first matrix\n");
		scanf("%d%d",&m,&n);
		
			
		printf("Enter the size of row and column for second matrix\n");
		scanf("%d%d",&p,&q);
		
		printf("\nEnter the elements for first matrix\n");
		for(i=0;i<m;i++)
		{
				for(j=0;j<n;j++)
				{
					scanf("%d",&first[i][j]);
				}
		}
		printf("\nEnter the elements for second matrix\n");
			for(i=0;i<p;i++)
		{
				for(j=0;j<q;j++)
				{
					scanf("%d",&second[i][j]);
				}
		}
		
			for(i=0;i<p;i++)
		{
				for(j=0;j<q;j++)
				{
					add[i][j] = first[i][j] + second[i][j];
					printf("%d\t",add[i][j]);
				}
				printf("\n");
		}
		return 0;
		
}
