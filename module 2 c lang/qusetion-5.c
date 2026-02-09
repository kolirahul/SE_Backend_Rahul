/* Write a C program to check if a number is even or odd using an if-else
statement. Extend the program using a switch statement to display the monthname based on the user’s input (1 for January, 2 for February, etc.).*/
#include<stdio.h>
main(){
	int num;
	int month;
	
	printf("\n enter a number");
	scanf("%d",&num);
	if(num%2==0){
		printf("\n even number");
		
	}
	else{
		printf("\n odd number");
	}
	
	printf("\n enter a month");
	scanf("%d",&month);
	switch(month){
		case 1: printf("\n janurary");break;
		case 2: printf("\n february");break;
		case 3: printf("\n march");break;
		case 4: printf("\n april");break;
		case 5: printf("\n may");break;
		case 6: printf("\n june");break;
		case 7: printf("\n july");break;
		case 8: printf("\n august");break;
		case 9: printf("\n september");break;
		case 10: printf("\n october");break;
	    case 11: printf("\n november");break;
		case 12: printf("\n december");break;
				
	   default:
		printf("\n invlaid choice");								
	}
	 
		
	}

