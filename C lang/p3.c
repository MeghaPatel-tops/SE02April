#include<stdio.h>
main(){
	int i,j,k,m=0,n;
	for(i=1;i<=5;i++){
		n=64;
		m=0;
		for(k=4;k>=i;k--){
			printf(" \t");
			m++;
		}
		for(j=1;j<=i*2-1;j++){
			if(m<5){
				n++;
				printf("%c\t",n);
			}
			else{
				n--;
				printf("%c\t",n);
			}
			m++;
			
			
		}
		printf("\n");
	}
}
