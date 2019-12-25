

#include<stdio.h>

int main()

{

	int i,j,k;

	printf("Enter the number:");

	scanf("%d",&i);

	for(j=1;j<=10;j++)

	{

		k=i*j;

		printf("%dx%d=%d",i,j,k);

		printf("\n");

	}

	

	return 0;

}
