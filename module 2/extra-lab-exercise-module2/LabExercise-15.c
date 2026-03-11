/* LAB EXERCISE 2: Count Vowels and Consonants
  Write a C program that takes a string from the user and counts the number of vowels andconsonants in the string. 
 Challenge: Extend the program to also count digits and special characters. */
 #include<stdio.h>
 #include<string.h>
 void countVC(char str[50]){
 	int i;
 	int vowel=0,constant=0;
 	for(i=0;str[i] !=0;i++){
	 
 	if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' 
	 || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
	 	vowel++;
	 }
	 else if(str[i]>='a' && str[i]<='z' || str[i]>= 'A' && str[i]<='Z'){
	 	constant++;
	 }
 }
 printf("\n number of vowels are :%d",vowel);
 printf("\n nimber of conostant are :%d",constant);
} 
main(){
	char str[50];
	printf("\n entrer a string :");
	fgets(str,sizeof(str),stdin);
	countVC(str);
}
