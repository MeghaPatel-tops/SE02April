#include<stdio.h>
/*
if(condition){
	if(condition){
	
	}
}
else{
//block
}
*/
main(){
	int maths,phy,chem;
	int total,subtotal;
	
	printf("\n Enter the marks of maths phy chem");
	scanf("%d %d %d",&maths,&phy,&chem);
	
	if(maths >= 65 && phy >= 55 && chem >=50){//55 56 51= 173 //122
		  
		  total = maths+phy+chem;
		  subtotal = maths+phy;
		  if(total >=190 || subtotal >=140){
		  	  printf("\n Eligible for admision");
		  }
		  else{
		  		printf("\n Not eligible: total marks more than 190");
		  }
	}
	else{
		printf("\n Not eligible");
	}
}
