/* Write a C program that accepts two 2x2 matrices from the user and adds them. Display theresultant matrix. 
 Challenge: Extend the program to work with 3x3 matrices and matrix multiplication*/
 #include<stdio.h>
   int i,j;
   void getmatrix(int a[2][2]){
     for(i=0;i<2;i++){
   	 for(j=0;j<2;j++){
   		printf("\n array [%d][%d]=",i,j);
   		scanf(" %d",&a[i][j]);
	   }
   }	
 }
     void showmatrix(int a[2][2]){
   for(i=0;i<2;i++){
   	for(j=0;j<2;j++){
   		printf("\n array [%d][%d]=%d",i,j,a[i][j]);
   		}
   }	
   }
 
 void addmatrix(int a[2][2],int b[2][2],int c[2][2]){
      int i,j;
	for(i=0;i<2;i++){
    	for(j=0;j<2;j++){
    		
    		c[i][j] = a[i][j] + b[i][j];
   }
 }
}
 
 main(){
 	int a[2][2],b[2][2],c[2][2];
 	getmatrix(a);
 	getmatrix(b);
 
 	printf("\t shown the matrixx of a and b");
 
 	showmatrix(a);
 	showmatrix(b);
 	
 	printf("\n added matrix of a and b");
 	addmatrix(a,b,c);
 	showmatrix(c);
 }
