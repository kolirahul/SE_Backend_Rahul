/* Write a C program to demonstrate pointer usage. Use a pointer to modifythevalue of a variable and print the result*/

#include<stdio.h>
main(){
	int a=10;
	int *ptr;
	ptr=&a;
	printf("\n ptr=%d",*ptr);
	*ptr=200;
    	printf("\n a=%d",a);
}
	// swapping
	
/*	void swap(int a,int b){
		int temp;
		temp=a;
		a=b;
		b=temp;
		printf("\n after swapping a=%d and b=%d",a,b);
	}
	main() {
		int a=10,b=20;
		swap(a,b);
		printf("\n before swapping a=%d and b=%d",a,b);
	}
	
	*/
	
	

