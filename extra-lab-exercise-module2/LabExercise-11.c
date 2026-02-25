/* Write a C program that generates the Fibonacci sequence up to N terms using a recursivefunction. 
 Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative and recursive method. 
  Compare their efficiency. */
  #include<stdio.h>
  int fibonacci(int n){
  	if(n==0)
  	return 0;
  	else if(n==1)
  	return 1;
  	else 
	  return fibonacci(n-1)+fibonacci(n-2);
  }	
  int itreative(int n){
  	int a=0,b=1,c,i;
  	if(n==0)
  	return 0;
  	for(i=2;i<=n;i++){
  		c=a+b;
  		a=b;
  		b=c;
	  }
	  return b;
  }
  
main(){
	int n,i;
	printf("\n enter a number :");
	scanf("%d",&n);
	printf("\n fibanocci sequence:");
	for(i=0;i<n;i++){
		printf("\n %d",fibonacci(i));
	}
	
	printf("\n iterative function :%d",itreative(n));
}
  	
  	
  	
  
