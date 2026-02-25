/* LAB EXERCISE 1: String Reversal ? Write a C program that takes a string as input and reverses it using a function. 
 Challenge: Write the program without using built-in string handling functions */
 #include<stdio.h>
 
 void revstring(char str[]){
 	int i,length=0;
 	char temp;
  
  	while(str[length] !='0'){
 		length++;
	 }
	for(i=0;i<length / 2;i++){
		temp=str[i];
		str[i]=str[length-i-1];
		str[length-i-1]=temp;
	}
}
main(){
	char str[30];
	printf("\n enter a college name :");
	scanf("%[^\n]",str);
	
	strrev(str);
	printf("reverse string :%s",str);
}
