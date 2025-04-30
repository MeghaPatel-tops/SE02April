#include<stdio.h>
main(){
	int a,b,c;
	float div;
	printf("\n enter the value of a and b");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("\n add=%d",c);
	c=a-b;
	printf("\n sub=%d",c);
	c=a*b;
	printf("\n mul=%d",c);
	div=a/b;
	printf("\n div=%f",div);
	c=a%b;
	printf("\n modulo=%d",c);
	a++;
	printf("\n a=%d",a);
	b--;
	printf("\n b=%d",b);
	
	
}
