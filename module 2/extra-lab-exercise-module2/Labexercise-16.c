/* write a c program that counts the number of words in sentenace entered by the users.
challenge : modify the program to find the longest word in a sentence.*/

#include<stdio.h>
#include<string.h>
int main(){
	char str[200],longest[50];
    int i=0,maxlength,length;
    
    printf("\n enter a sentnce :");
    fgets(str,sizeof(str),stdin);
    
    while(1){
    	if(str[i]!=' ' && str[i]!='\0' && str[i]!='\n'){
    		length++;
		}
		else{
		
		if(length>maxlength){
			maxlength=length;
			strncpy(longest,&str[i-length],length);
			longest[length]='\0';
		}
		length=0;
	}
	if(str[i]=='\0')
	break;
	i++;
}
 printf("\n longest word :%s",longest);
 printf("\n length of word:%d",maxlength);
}
