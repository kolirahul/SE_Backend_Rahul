/*  Write a C program that takes N numbers from the user and stores themin an array. 
  The program should then calculate and display the sum of all array elements. 
  Challenge: Modify the program to also find the average of the numbers */
  #include<stdio.h>
  main(){
  
  int array[5];
  int i,sum=0;
  float average;
   
   for(i=0;i<5;i++){
  printf("\n enter a number :");
  scanf("%d",&array[i]);
}
   for(i=0;i<5;i++){
   	sum = sum+array[i];
  }
   average = sum/5.0;
   
  for(i=0;i<5;i++){
  	printf("\n array= %d",array[i]);
  	 }
  printf(" \n sum of all array= %d",sum);
  printf("  \n average of all array= %f",average);
}
