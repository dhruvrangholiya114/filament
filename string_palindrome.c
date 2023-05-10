#include<stdio.h>

main()

{
	char string[100];
	char temp[100];
	printf("enter string :-");
	gets(string);
	strcpy(temp,string);

	
	printf("Reverse String is %s\n",strrev(temp));
	
	
	if(strcmp(temp,string)==0)
	{
		printf("Both Strings are Palindrome");
	}
	else
	{
		printf("Both Strings are not Palindrome");
	}
	
}
