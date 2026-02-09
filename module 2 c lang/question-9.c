/* Write a C program that stores 5 integers in a one-dimensional array andprintsthem. Extend this to handle a two-dimensional array (3x3 matrix) and
calculate the sum of all elements.*/

#include<stdio.h>
main(){
	int arr[5];
	int i,j,sum=0;
	int matrix[3][3];
		
	for(i=0;i<5;i++){
	 printf("\n enter a multiple number: ");
	 scanf("%d",&arr[i]);
   }
   for(i=0;i<5;i++){
   
   printf("\n array of num : %d",arr[i]);
} 
     // HANDLE A TWO DIMENSIONAL ARRAY 3*3 MATRIX 

   printf("\n enter a two dimensionl array 3*3 matrix :");
       
       for(i=0;i<3;i++){
       	for(j=0;j<3;j++){
       		scanf(" \n %d",&matrix[i][j]);
       		sum += matrix[i][j];
       		
		   }
	}
		   printf("\n 3*3 matrix : \n");
		   for(i=0;i<3;i++){
       	for(j=0;j<3;j++){
       		printf(" %d ",matrix[i][j]);
       		
       		
	   }
	   printf("\n");
	   
} printf("\n sum of all matrix=%d",sum);
       
}

