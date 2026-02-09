/* Write a C program that accepts two integers from the user and performs
arithmetic, relational, and logical operations on them. Display the results */

#include<stdio.h>
main(){
	float a,b;
	int choice,op;
	
	
	printf("\n which operator you want to use: ");
	printf("\n click 1: arithmetic operator ");
	printf("\n click 2: realtional operator ");	
	printf("\n click 3: logical operator ");
	
	printf("\n enter a choice of operator");
	scanf("%d",&choice);
	
	printf("\n enter a number ");
    scanf("%f %f",&a,&b);
	
	switch (choice){
	
	 case 1:
	 	printf("    arithmetic operator  ");
	 	printf(" select \n 1.addition \n 2.subtraction \n 3.multiplication \n 4.division");
	 	printf("\n choose a operation");
	 	scanf(" %d",&op);
	 	 
	 	 switch(op){
	 	 	case 1: printf("\n answer=%f",a+b);
	 	 	case 2: printf("\n answer=%f",a-b);
	 	 	case 3: printf("\n answer=%f",a*b);
	 	 	case 4: printf("\n answer=%f",a/b);
	 	 	
		  }
	 	break;
	 case 2:
	     printf("  realrional operator");
		 printf("\n 1.equal to \n 2.greator than \n 3.less than \n 4.greator equal to");
		 printf("\n choose an operation");
		 scanf("%d",&op);
		 
		 switch(op){
		 	case 1: printf(" \n a==b =%d",a==b);
		 	case 2: printf(" \n a>b  =%d",a>b);
		 	case 3: printf(" \n a<b  =%d",a<b);
		 	case 4: printf(" \n a>=b =%d",a>=b);
		 }	
		 break;
		
	case 3:
			printf("    logical operator  ");
	 	printf(" select \n 1.AND \n 2.OR \n 3.NOT");
	 	printf("\n choose a operation");
	 	scanf(" %d",&op);
	 	 
	 	 switch(op){
	 	 	case 1: printf("\n a&&b=%d",a && b);
	 	 	case 2: printf("\n a||b=%d",a || b);
	 	 	case 3: printf("\n !a=%d",!a);
	 	 	case 4: printf("\n !b=%d",!b);
	 	
	 	 	
		  }
	 	break;
		
}
}
