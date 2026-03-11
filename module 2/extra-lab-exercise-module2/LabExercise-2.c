/* LAB EXERCISE 2: Check Number Properties
   Write a C program that takes an integer from the user and checks the following using
different operators:
    Whether the number is even or odd. o Whether the number is positive, negative, or zero. 
    Whether the number is a multiple of both 3 and 5 */ 
    
#include<stdio.h>
int main(){
	int num,i;
	for(i<0;i<5;i++){
	
	printf("\n enter a number :");
	scanf(" %d",&num);
	
	if(num%2==0){
	
		printf(" even number :");
		
	}  
	else {
		printf(" odd number :");
		
	}
	if(num>0){
		printf(" it is positive number : ");
	}
	 else{
	 	printf(" it is a negative number :");
	 }
	 if(num==0){
	 	printf(" it is a zero :");
	 }
	 
	 if(num%3==0 && num%5==0){
	 	printf(" multiple by 3 and 5 :");
	 }
	 else if(num%3==0){
	 	printf(" only multiple of 3 :");
	 }
	 else if(num%5==0){
	 	printf(" only multiple of 5 :");
	 } 
	 else {
	 	printf(" not multiple of 3 and 5 :");
	 }
	 
}
}
