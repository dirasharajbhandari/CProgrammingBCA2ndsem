#include<stdio.h>
int main()
{
	

int arr[]={10,20,30,40,50};
int  *ptr;
ptr=arr;//pointing to the first element of the array

//print element using ponyer arithmetic
for(int i=0;i<5;i++)
{
	printf("Value at arr[%d]=%d\n",i,*(ptr+i));//*(ptr+i)gives the value in the array
}

return 0;

}

