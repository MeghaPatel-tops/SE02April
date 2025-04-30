#include<stdio.h>
main(){
	//Relation operator=> (<,>,<=,>=,!=,==)
	int a=10,b=16,c;
	c = a==b;//if both are equal then return 1
	printf("\n (a==b)=%d",c);
	c= a<b;
	printf("\n (a<b)=%d",c);
	c= a!=b;
	printf("\n (a!=b)=%d",c);
	//Assignment Operators=> +=,-=,*=,/=
	a+=10;//a=a+10//10+10=20
	printf("\n a=%d",a);
	
	//sizeof operator
	printf("\n size of int=%d",sizeof(90));
	printf("\n size of float=%d",sizeof(float));
	printf("\n size of double=%d",sizeof(double));
	printf("\n size of char=%d",sizeof(char));

}
