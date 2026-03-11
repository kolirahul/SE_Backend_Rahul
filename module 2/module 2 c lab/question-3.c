/* Write a C program that includes variables, constants, and comments.
 Declareand use different data types (int, char, float) and display their values.*/
#include<stdio.h>
main(){
	int age;
	char name[20];
	float marks;
	 
	 printf("\n enter a age of student");
	 scanf(" %d",&age);
	 printf("\n enter a name of student");
	 scanf("%s",&name);
	 printf("\n enter a marks");
	 scanf("%f",&marks);
	 
	 printf("\t%d \t%s \t%f",age,name,marks);
	 
}
