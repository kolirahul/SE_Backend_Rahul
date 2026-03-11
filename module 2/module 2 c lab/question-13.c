/* Write a C program to create a file, write a string into it, close the file, 
then open the file again to read and display its contents.*/

 #include<stdio.h>
 main(){
 	FILE *fp;
 	char ch,str[20];
 	fp=fopen("char13.txt","w");
 	fputs(" my name is rahul",fp);
 	fclose(fp);
 	
 	fp=fopen("char13.txt","r");
 	fgets(str,19,fp);
 	printf("\n str=%s",str);
 	fclose(fp);
 }
