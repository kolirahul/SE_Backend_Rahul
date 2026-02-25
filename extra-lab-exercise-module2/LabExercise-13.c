/*  Write a C program that takes a number as input and checks whether it is a palindromeusinga function. 
 Challenge: Modify the program to check if a given string is a palindrome. */
 #include<stdio.h>
 #include<string.h>
 /*int palindrome(int p){
 	int rev=0,rem,num;
 	num=p;
 	while(num>0){
 		rem = num %10;
 		rev = rev *10+rem;
 		num = num/10;
	 }
	 if(p==rev)
	 return 1;
	 else 
	 return 0;
}*/
 int checkstring(char str[]){
 	int i,len;
 	len=strlen(str);
 	
 	for(i=0;i<len/2;i++){
 		if(str[i]!=str[len -i-1])
 		return 0;
	 }
	 return 1;
 }
 main(){
 /*	int num;
 	printf("\n enetr a number :");
 	scanf("%d",&num);
 	
 	if(palindrome(num))
 	printf("\n it is a palindrome number :");
 	else
 	printf("\n it is not a palidronme numebr :");
	 } */
	
	 
	 char str [100];
 	printf("\n enetr a number :");
 	scanf("%s",str);
 	
 	if(checkstring1	(str))
 	printf("\n it is a palindrome number :");
 	else
 	printf("\n it is not a palidronme numebr :");
	 }

