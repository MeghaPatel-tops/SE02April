#include<stdio.h>
main(){
	int i,num,rem,rev=0,sum=0,last_digit,first_digit;
	printf("\n Enter the number");
	scanf("%d",&num);//1234   1+2+3+4=10   1+4=5
	last_digit= num%10;//1234  4
	while(num!=0){
		rem = num%10;
		rev=rev*10+rem;
		sum=sum+rem;
		first_digit = rem;
		num=num/10;
		
	}
	
	printf("\n rev num=%d",rev); 
	printf("\n sum num=%d",sum); 
	printf("\n addition of first and last digit=%d",first_digit+last_digit); 
	
}
