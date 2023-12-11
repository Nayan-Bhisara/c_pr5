/*
Q.3 Write a Program to find the transpose matrix of a given 2D array.
For example,
Input:
Enter the array's row & column size: 3

Enter array's elements:
a[0][0] = 2
a[0][1] = 4
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 2
a[2][2] = 6

Output:
The transpose matrix of an array:
2 3 8
4 5 2
1 4 6

*/

#include<stdio.h>
void main(){

int r,c,i,j;
printf("enter the size of row:");
scanf("%d",&r);
printf("enter the size of coln:");
scanf("%d",&c);

int a[r][c];
for(i=0;i<r;i++){
	for(j=0;j<r;j++){
		printf("enter a[%d][%d] : ",i,j);
		scanf("%d",&a[i][j]);
	}
}

printf("matrix before tranpose:\n");
for(i=0;i<r;i++){
	for(j=0;j<r;j++){
		printf("%d",a[i][j]);
	}
	printf("\n");
}

	printf("The transpose matrix of an array:\n");
	for(i=0;i<r;i++){
		for(j=0;j<r;j++){
			printf("%d",a[j][i]);
		}
		printf("\n");
	}
}


/*
enter the size of row:3
enter the size of coln:3
enter a[0][0] : 3
enter a[0][1] : 2
enter a[0][2] : 1
enter a[1][0] : 3
enter a[1][1] : 2
enter a[1][2] : 1
enter a[2][0] : 3
enter a[2][1] : 2
enter a[2][2] : 1
matrix before tranpose:
321
321
321
The transpose matrix of an array:
333
222
111
*/
