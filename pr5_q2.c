/*
Q.2 Write a Program to find the largest element from a given 2D array.
For example,
Input:
Enter the array's row size: 3
Enter the array's column size: 3

Enter array's elements:
a[0][0] = 2
a[0][1] = 7
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 9
a[2][2] = 6

Output:
The largest element is: 9
*/

#include<stdio.h>
void main(){

int large,r,c,i,j;
printf("enter the size of row:");
scanf("%d",&r);
printf("enter the size of coln:");
scanf("%d",&c);

int a[r][c];
for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		printf("enter a[%d][%d] : ",i,j);
		scanf("%d",&a[i][j]);
	}
}

large=a[0][0];
for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		if(large<a[i][j]){
			large=a[i][j];
		}
	}
}

	printf("the largest element : %d",large);
	
}


/*
enter the size of row:3
enter the size of coln:3
enter a[0][0] : 5
enter a[0][1] : 5
enter a[0][2] : 4
enter a[1][0] : 5
enter a[1][1] : 9
enter a[1][2] : 8
enter a[2][0] : 7
enter a[2][1] : 5
enter a[2][2] : 3
the largest element : 9
*/
