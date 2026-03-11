/* Write a C program that defines a structure to store a student's details (name, roll number, and marks). 
Use an array of structures to store details of 3students and print them. */ 

#include<stdio.h>
  struct student{
  	 int rollno;
     char name[20];
     float marks;
};
main(){

  struct student s[3];
  int i;
  
  for(i=0;i<3;i++){
  	//printf("%d",i+1);
  	printf("\n %d enter a student rollno: ", i+1);
  		scanf(" %d", &s[i].rollno);
  		
  	printf("\n %d enter a student name: ", i+1);
  		scanf(" %s",s[i].name);
  		
  	printf("\n %d enter a total marks of student: ", i+1);
  	    scanf(" %f",&s[i].marks);
  }
  printf("\n student details: ");
  for(i=0;i<3;i++){
  	printf("\nrollno= %d \t name= %s \t marks= %f",s[i].rollno, s[i].name, s[i].marks);
  	}
  }
