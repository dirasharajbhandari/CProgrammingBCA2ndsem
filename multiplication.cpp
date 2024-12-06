#include<stdio.h>

//int main()
//{
//	int num,i;
//	 printf("Enter the number:");
//	 scanf("%d",&num);
//	 for(i=1;i<=10;i++)
//	 {
//	 printf("%d * %d = %d\n",num,i,num*i);
//	 
//	 }
//
//return 0;
//}

//int main()
//{
//	int num,i,j;
//	
//	printf("Multiplication table:\n");
//	 for(i=2;i<=10;i++)
//	 {
//	 	
//	 	for(j=1;j<=10;j++)
//	 	{
//	 		printf("%d x %d = %d\n",i,j,i*j);
//		 }
//		 printf("\n");
//	 }
//}


void mux()
{
	int i,j;
	printf("Multiplication Table 2-10:\n");
	
	for(i=1;i<=12;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d x %d = %d\n",i,j,i*j);
		}
		printf("\n");
	}
	
}
int main()
{
	mux();
	printf("\n");
	mux();
	printf("\n");
}


























