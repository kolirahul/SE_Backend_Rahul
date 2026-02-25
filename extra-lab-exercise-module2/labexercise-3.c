/* LAB EXERCISE 1: Grade Calculator
 Write a C program that takes the marks of a student as input and displays the correspondinggrade based on the following conditions:
 Marks > 90: Grade A
 Marks > 75 and <= 90: Grade B
 Marks > 50 and <= 75: Grade C
 Marks <= 50: Grade D

 Use if-else or switch statements for the decision-making process.*/
 
 #include<stdio.h>
 main(){
 	int m;
 	printf("\n enter a marks of an student:");
 	scanf("\n %d",&m);
 	if(m>90){
 		printf("\n Grade A");
	 }
	 else if(m>75 || m>=90){
	 	printf("\n Grade B");
	}
	  else if(m>50 || m>=75){
	 	printf("\n Grade C");
	 }
	 else if(m>=50){
	 	printf("\n Grade D");
	 }
 }
