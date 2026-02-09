/* Write a C program that uses the break statement to stop printing numbers
when it reaches 5. Modify the program to skip printing the number 3 usingthecontinue statement.*/

#include<stdio.h>
main(){
	int i;
    printf("\n using break statement");
    for(i=1;i<=10;i++){
    	if(i==5){
		
    	break;
    }
	
      printf(" \n %d",i);
} 
	int j;
    printf("\n using break statement");
    for(j=1;j<=10;j++){
    	if(j==3){
		
    	continue;
    }
	
      printf(" \n %d",j);
} 
    
}
