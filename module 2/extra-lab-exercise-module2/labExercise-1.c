 /* LAB EXERCISE 1: Simple Calculator
     Write a C program that acts as a simple calculator. The program should take two numbers
and an operator as input from the user and perform the respective operation 
(addition, subtraction, multiplication, division, or modulus) using operators. */

#include<stdio.h>
int main()
{
	int choice;
	float num1,num2,ans;
	printf("\n enter two number:");
	scanf("%f %f",&num1,&num2);
	
	printf("\n select a choice:");
	scanf("\n %d",&choice);

    switch(choice)
{

	case 1:
	ans=num1+num2;
	printf("\n addition= %f",ans);
	break;
	
	case 2:
	ans=num1-num2;
	printf("\n sub= %f",ans);
	break;
	
	case 3:
	ans=num1*num2;
	printf("\n mul=%f %f",ans);
	break;
	
	case 4:
	ans=num1/num2;
	printf("\n div=%f %f",ans);
	break;
	
	// challenge :
	default:
		printf("\n invalid choice");
		break;
}
}
