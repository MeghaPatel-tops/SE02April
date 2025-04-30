#include<stdio.h>
/*
switch(ch){
	case 1:
		//block
	break;
	case 2:
		//block
	break;
	default:
		//block
	break;			
}
*/
main(){
	
	int ch,r,l,b;
	printf("\n press 1 for area of circle");
	printf("\n press 2 for area of rectangle");
	printf("\n press 3 for area of sqaure");
	
	printf("\n\n enter the choice");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:
			printf("\n Enter radius");
			scanf("%d",&r);
			printf("\n area of circle=%f",(3.14*r*r));
		break;
		case 2:
			printf("\n enter l and b");
			scanf("%d %d",&l,&b);
			printf("\n area of reactangle=%d",(l*b));
		break;
		case 3:
			printf("\n enter l");
			scanf("%d",&l);
			printf("\n area of sqaure=%d",(l*l));
		break;	
		default:
			printf("\n Wrong choice");
		break;		
	}
	
	
	
}
