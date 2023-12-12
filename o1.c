#include<stdio.h>
main(){
	int row,col,count;
	printf("Enter the size of an row:");
	scanf("%d",&row);
	printf("Enter the size of an col:");
	scanf("%d",&col);
	int a[row][col],b[row][col],c[row][col];
	int i,j;
	//input array A elements
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			count++;
			printf("Enter b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nAddition of elements of array A and array B are :");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n\nsubraction of elements of array A and array B are :");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			c[i][j]=a[i][j]-b[i][j];
			printf("%d ",c[i][j]);
		}
	}
	printf("\n\nmultiplication of elements of array A and array B are :");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			c[i][j]=a[i][j]*b[i][j];
			printf("%d ",c[i][j]);
		}
	}
}
