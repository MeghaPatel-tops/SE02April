#include<stdio.h>
main(){
	int i,j,k,m=97,n;
	
	for(i=1;i<=5;i++){
		
		for(j=1;j<=i;j++){
			printf("\t%c",m);
			m++;	
		}
		printf("\n");
	}
}
