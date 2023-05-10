#include<stdio.h>

main()
{
	char email[100]="dhruv123@gmail.com";
	char password[100]="12345678";
	char email2[100];
	char password2[100];
	
	
	printf("Enter Your Email Address :-\n");
	gets(email2);
	printf("Enter Your Password :-\n");
	gets(password2);
	
	if(strcmp(email,email2)==0 && strcmp(password,password2)==0)
	{
		printf("\nLogin Completed Successfully");
	}
	else
	{
		printf("\nInvalid Email Address/Password");
	}
}
