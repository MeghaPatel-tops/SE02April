//The Fibonacci Sequence
#include<stdio.h>
main(){
	int x=0,y=1,sum,i;
	for(i=1;i<10;i++){
		sum=x+y;
		printf("\t %d",sum);
		x=y;
		y=sum;
	}
}
