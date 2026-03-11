/* Write a C program that calculates the factorial of a given number using a function. 
Challenge: Implement both an iterative and a recursive version of the factorial functionandcompare their performance for large numbers.*/

#include<stdio.h>
int factfind(int n){
	if(n==1){
		return 1;
	}
	int f;
	f=n*factfind(n-1);
	return f;
}
 int iterative(int n){
 	int f=1;
 	int i;
 	for(i=1;i<=n;i++){
 		f=f*i;
	 }
	 return f;
 }
main(){
	int n;
	printf("\n enert a number :");
	scanf("%d",&n);
	printf("\n factorial of given number :%d",factfind(n));
	
	printf("\n iterative of factorail: %d",iterative(n));
}
