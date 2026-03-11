#include<stdio.h>
int i,j;
 void getmatrix(int a[3][3]){
 	
 	for(i=0;i<3;i++){
 		for(j=0;j<3;j++){
 			printf(" array [%d][%d]= ",i,j);
 			scanf("%d",&a[i][j]);
		 }
		 printf("\n");
	 }
}
void showmatrix(int a[3][3]){
   for(i=0;i<3;i++){
   	for(j=0;j<3;j++){
   		printf("\n array [%d][%d]=%d",i,j,a[i][j]);
   		}
   }	
}
void multimatrix(int a[3][3],int b[3][3],int c[3][3]){
      	int i,j,k;for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		c[i][j]=0;
    		for(k=0;k<3;k++){
    			c[i][j] += a[i][k] * b[k][j];
			}
	  }
}
}
main(){
		int a[3][3],b[3][3],c[3][3];
	getmatrix(a);
	getmatrix(b);
	showmatrix(a);
	showmatrix(b);
	printf("\n mutliplication of matrix ");
	multimatrix(a,b,c);
	showmatrix(c);
}

