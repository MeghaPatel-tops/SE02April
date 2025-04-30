#include<stdio.h>
main(){
	const int x=12;
	char ch='y';// %c ===>1 byte
	int a=10;//%d===byte 4
	float pi=3.14;//=%f ===byte 4
	printf("\n a=%d",a);
	printf("\n pi=%f",pi);
	printf("\n ch=%c",ch);
	a=12;
	x=1;
	printf("\n x=%d",x);
	printf("\n a=%d",a);
	
	
    
}

