#include<stdio.h>
main(){
	int x=10,y,m=9,n;
	y=x++;//post increment=>value assign first  then increment by 1 itsself
	printf("\n y=%d",y);
	printf("\n x=%d",x);
	
	n=++m;//pre incremnet=>first incremnt 1 by itself then assign to other
	
	printf("\n n=%d",n);
	printf("\n m=%d",m);
	m--;
	printf("\n decrement m=%d",m);
}
