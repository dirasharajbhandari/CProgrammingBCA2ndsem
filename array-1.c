#include<stdio.h>


    int x=0,y=0,i;
	int arr[]={1,2,3,4,5};
	
int main()
{
	int arr[] = {1,2,3,4,5};
	int result;
	int size = sizeof(arr)/ sizeof(arr[0]);
	result = oddeven(arr,size);
	printf("Result:%d", result);
	
	
	
}
int oddeven(int arr[], int size)
{
	int i;
	int x=0;
	int y=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			y=y+arr[i];
			
		}
		else
		{
			x=x+arr[i];
		}
	
	}
		return x-y;	
	
}

