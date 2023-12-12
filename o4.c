// Write a program to find the minimum and maximum and same element in a 2D array.

#include<stdio.h>
main(){
	
	int max,min,r,c,i,j;
	printf("Enter the size of row:");
	scanf("%d",&r);
	printf("Enter the size of coln:");
	scanf("%d",&c);
	
	int a[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	max=a[0][0];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(max<a[i][j]){
			max=a[i][j];
		}
		}
	}
	
	printf("\n maximum element : %d",max);
	
	max=a[0][0];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(min>a[i][j]){
			min=a[i][j];
		}
		}
	}
	
	printf("\n minimum element : %d",min);
	
}
