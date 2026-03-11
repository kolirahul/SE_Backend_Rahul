/* Write a C program that takes two strings from the user and concatenates them using strcat(). Display the concatenated string and its length using
strlen().*/
#include<stdio.h>
#include<string.h>
main(){
	char str1[20],str2[20];
	printf("\n enter a string 1 and string 2 :");
	scanf(" %s %s",&str1,&str2);
	
	strcat(str2,str1);
	printf("\n strcat= %s ",str2);
	printf("\n length of string =%d",strlen(str2));
}
