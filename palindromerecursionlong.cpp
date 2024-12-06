#include<stdio.h>
#include<string.h>

int ispalindrome(char str[],int start,int end)
	
	{
		if(start>=end)
		{
			return 0;
		}
		else
		{
			return 1;
		}
		//recursive case
		return ispalindrome(str,start+1,end-1);
	}
	int main()
	{
		char word[50];
		
		printf("Enter the word:");
		scanf("%s",&word);
		
		if(ispalindrome(word,0,strlen(word)-1))
		{
			printf("%s is a palindrome",word);
		}
		else
		{
			printf("%s is not a palindrome");
		}
		return 0;
	}

