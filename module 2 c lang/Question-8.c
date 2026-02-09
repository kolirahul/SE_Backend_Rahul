/* Write a C program that calculates the factorial of a number using a function. Include function declaration, definition, and call.*/

#include<stdio.h>
int factfind(int num){     // function declaration
 if(num==1){
		return 1;
	}
	int f;
	f=num*factfind(num-1);  // function defintion
	return f;
}
    
main(){
    // function call
	printf("\n factorial=%d",factfind(5));

	printf("\n factorial=%d",factfind(3));
}
