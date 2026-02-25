/* Write a C program that takes an integer input from the user and prints its multiplication table using a for loop. 
 Challenge: Allow the user to input the range of the multiplication table (e.g., from1 toN)*/
 
 #include<stdio.h>
 main(){
 	int num,i,range;
 	printf("\n enetr a num :");
 	scanf("%d",&num);
 	
 	printf("Enter the range: ");
    scanf("%d", &range);

    printf("Multiplication Table of %d up to %d:\n", num, range);

 	for(i=1;i<=range;i++){
 		printf("\n %d * %d =%d",num,i,num*i);
 		
		 }
 		
	 }
 
