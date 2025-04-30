#include<stdio.h>
main(){
	int i,start,end,ch;
	for(i=20;i>=10;i--){
		printf("\n i=%d",i);
	}
	printf("\n press 1 for forward \n press 2 for reverse loop");
	printf("\n Enter start value and end value");
	scanf("%d %d",&start,&end);
	printf("\n Enter choice");
	scanf("%d",&ch);
	if(ch==1){
		for(i=start;i<=end;i++){
			printf("\n i=%d",i);
		}
	}
	else if(ch==2){
		for(i=end;i>=start;i--){
			printf("\n i=%d",i);
		}
	}
	else{
		printf("\n Invalid choice");
	}
}
