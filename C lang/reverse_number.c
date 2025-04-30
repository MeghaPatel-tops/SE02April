#include<stdio.h>
main(){
	int i,num,rem,rev=0;
	printf("\n Enter the num");
	scanf("%d",&num);//1234==== 1+2+3+4=10   or  first+last 1+4=5
	
	while(num!=0){
		rem = num%10;
		rev = rev*10+rem;
		num= num/10;	
	}
	printf("\n rev num=%d",rev);

}
