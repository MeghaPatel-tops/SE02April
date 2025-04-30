#include<stdio.h>
main(){
	int i,num;
	printf("\n Enter the num");//5 * 1=5
	scanf("%d",&num);
	
	for(i=1;i<=10;i++){
		printf("\n %d * %d = %d ",num,i,num*i);
	}
	
}
