/*  Write a C program that takes three numbers from the user and determines:
  The largest number.  The smallest number. 
   Challenge: Solve the problem using both if-else and switch-case statements.*/
   
   #include<stdio.h>
   main(){
   	int a,b,c,choice;
   	printf("\n enetr a three numbers A and B and C :");
   	scanf("\n %d %d %d",&a,&b,&c);
   	
   	printf("\n enter a choice :");
   	printf("\n 1 for largest number \t 2 for smallest number ");
   	scanf("%d",&choice);
   	
   	switch(choice){
	   case 1:
   	if(a>b && a>c){
   		printf("\n A is largest number %d:",a);
	   }
	   else if(b>a && b>c){
	   	printf("\n B is a largest number %d:",b);
	   }
	   else if(c>a && c>b){
	   	printf("\n C is a largest number %d:",c);
	   	
	   }
	   break;
	   
	   case 2:
	   		if(a<b && a<c){
   		printf("\n A is smallest number %d:",a);
	   }
	   else if(b<a && b<c){
	   	printf("\n B is a smallest number %d:",b);
	   }
	   else if(c<a && c<b){
	   	printf("\n C is a smallest number %d:",c);
   }
}
}

