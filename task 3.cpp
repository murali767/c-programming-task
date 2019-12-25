
#include<stdio.h>

main()

{

	float sub1,sub2,sub3;

	float sum,average;

	

	printf("Enter marks in subject1:");

	scanf("%f",&sub1);

	printf("Enter marks in subject2:");

	scanf("%f",&sub2);

	printf("Enter marks in subject3:");

	scanf("%f",&sub3);

	

	sum = sub1+sub2+sub3;

	average=sum/3;

	printf("\nThe sum is %.2f\nThe average is %.2f",sum,average);

	

	return 0;

	

}
