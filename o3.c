#include<stdio.h>
main(){
	
	int row,col,count=0;
	int sum=0;
	float avg;
	
	printf("Enter the size of an row:");
	scanf("%d",&row);
	printf("Enter the size of an col:");
	scanf("%d",&col);
	
	int a[row][col];
	int i,j;
	
	//input array A elements
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			count++;
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
			sum+=a[i][j];
		}
	}
	avg=sum/count;
	printf("average of all elements : %f",avg);
	
}
