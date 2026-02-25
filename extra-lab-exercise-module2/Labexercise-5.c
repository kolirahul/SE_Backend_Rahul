/* Write a C program that checks whether a given number is a prime number or not. using a for loop. 
 Challenge: Modify the program to print all prime numbers between 1 and a given number. */

#include<stdio.h>
main(){
	int num,i,j,rah=0;
	
	printf("\n enter a number :");
	scanf("\n %d",&num);
	
	for(i=2;i<=num;i++){
		rah=1;
		
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				rah=0;
				break;
			}
		}
	}
	
	if(rah==1){
			printf("\n it is a prime number :");
		}
		else {
			printf("\n it is not a prime number :");
		}
		
		/*  print all given prime number*/ 
		printf("\n prime number between the given number %d are \n",num);
			for(i=2;i<=num;i++){
		rah=1;
		
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				rah=0;
				break;
			}
		}
		if(rah==1){
		printf("\n %d",i);
		
	}	

	}
}
