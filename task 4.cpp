
#include<stdio.h>

#include<string.h>

main()

{

	char firstname[15],lastname[15];

	printf("Enter your first name and last name:\n");

	scanf("%s %s",&firstname, &lastname);

	strcat(firstname,lastname);

	printf("your fullname is : %s",firstname);

	

	return 0;

}
