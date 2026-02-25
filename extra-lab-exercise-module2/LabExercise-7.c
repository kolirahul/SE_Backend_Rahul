/* Write a C program that takes an integer from the user and calculates the sumof its digits
using a while loop.  Challenge: Extend the program to reverse the digits of the number.*/
#include<stdio.h>
main(){
	int num,sum=0,rem,rev=0;
	printf("\n enter a number ");
	scanf(" \n %d",&num);
	
	while(num!=0){ 
		rem=num%10;
		sum=sum+rem;
		num=num/10;
		rev=rev*10+rem;	
	}
	printf("\n sum of digit= %d",sum);
	printf("\n reverse of number %d",rev);
}
