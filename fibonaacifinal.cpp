#include<stdi.h>
void fibonacci(int n)
{
	int first=0,second=1,i,next;
	
	printf("Fibonacci series:\n");
	printf("%d%d",first,second);
	
	for(i=2;i<n;i)
	{
		next=first+second;
		printf("%d",next);
		first=second;
		second=next;
	}
	
}
int main()
{
	int n;
	printf("Enter the term:");
	scanf("%d",&n);
	
	fibonacci(n);
	return 0;
}
