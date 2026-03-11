 /*Write a C program to print numbers from 1 to 10 using all three types of loops(while, for, do-while).*/
 #include<stdio.h>
 main(){
 	int i;
 	int j=0;
 	
 	printf("\n using for loop");
	 while(j<=10){
 		  printf("\t %d",j);
	 j++;
}
	 printf("\n using while loop");   
 	for(i=0;i<=10;i++){
 		printf("\t %d ",i);
	 }
	  
	  printf("\n usng do-while loop");
	 int k=1;
	 do{
	    printf(" \t %d",k);
	 	k++;
	 }
	 
	 while(k<=10);
	 
        	 
	 
}

 	
 
