oddeven(int x, int y)
#include<stdio.h>
int x=0,y=0,i;
	int arr=[1,2,3,4,5];
	oddeven(int arr[]);
int main()
{
	
	oddeven(int arr[]);
	
}
oddeven(int arr[])
{
	
	for(i=0;i<5;i++)
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

