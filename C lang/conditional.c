#include<stdio.h>
main(){
	//WAP to find num is even or odd
	//WAP to find year is leap or not
	//WAP to find min max num among two varible
	//WAP to find min max num among three varible
	int num,age;
	printf("\n enter the num:");
	scanf("%d",&num);
	
	(num > 0)?printf("\n num is positive"):printf("\n num is negative");
	
	printf("\n enter the age:");
	scanf("%d",&age);
	(age >= 18)?printf("\n Eligible"):printf("\n not eligible");
}
