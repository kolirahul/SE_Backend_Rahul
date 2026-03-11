#include<stdio.h>
main(){
	
	int prize, total;
	int i,j;
	int choice,choice2,quantity;
	int sum,sum2,yes;
	int cnf;
	
	printf("\n Menu of welcome hotel :");

	printf("\n select order from menu : ");
	
	printf("\n 1.pizza     180 rs");
	printf("\n 2.burger    100 rs");
	printf("\n 3.idili      80 rs");
	printf("\n 4.dosa       50 rs");
	
	
	

 while(1){
 printf("\n select the choice :");
	scanf("%d",&choice);
	switch(choice){
			
	case 1: printf("\n you have selected pizza :");
	        prize=180;
	        printf("\n enter a quantity :");
          	scanf("%d",&quantity);
	
         	sum +=prize*quantity;
         	
	        printf("\n total amount of your order :%d",sum);
	break;
	       
	case 2: printf("\n you have selected burger:");
	        prize=100;
	        printf("\n enter a quantity :");
          	scanf("%d",&quantity);
	
         	sum +=prize*quantity;
         	
	printf("\n total amount of your order :%d",sum);
	break;
	
	case 3: printf("\n you have selected idili:");
	prize=80;
	        printf("\n enter a quantity :");
          	scanf("%d",&quantity);
	
         	sum += prize*quantity;
         	
	printf("\n total amount of your order :%d",sum);
	
	break;
	
	case 4: printf("\n you have selected dosa :");
	prize=50;
	        printf("\n enter a quantity :");
          	scanf("%d",&quantity);
	
         	sum +=prize*quantity;
         	
	
	break;
	
	default:
	    	printf("\n wrong choice of an order :");
		  return;
}

   printf("\n if you want to order more:  ");
   printf("\n press 1 for order more :");
   printf("\n press 2 for confirm your order :");
   scanf("%d",&cnf);
   if (cnf!=1 ) {
   	printf("\n Thank you! :");
   	
   	total += sum;
	printf("\n     FINAL BILL    ");
  printf("\n total amount to pay =%d",total); 
   	return;
   	}
   	else{
   		printf("Ordering ");
	   }
	   
}
      
   
   
   
   
   
   	
}
   
 
   	
	
	
	
	
	

