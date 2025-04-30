#include<stdio.h>
main(){
	int i,num;
	for(i=1;i<=10;i++){
		if(i==3){
			break;
		}
		printf("\n i=%d",i);
	}
	for(;;){
		printf("\n Enter num");
		scanf("%d",&num);
		if(num==0){
			break;
		}
	}
}
