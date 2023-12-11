/*
Q.4 Write a Program to print and find the sum of all elements of a given row & column from a 2D array.
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
Enter row number: 0
Elements of row 0: 2, 7, 1
The sum of a row 0: 10

Enter column number: 2
Elements of column 2: 1, 4, 6
The sum of column 2: 11
*/

#include<stdio.h>
void main(){

int large,n,r,c,i,j;
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

int x,y;
int sum=0,add=0;
printf("enter row number:");
scanf("%d",&x);
for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		if(i==x){
		printf("%d ",a[x][j]);
		sum+=a[x][j];
		}
	}
}

	printf("\nsum of element of a row: %d",sum);
	
	printf("\nenter cln number: ");
	scanf("%d",&y);
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(j==y){
			printf("%d ",a[i][y]);
			add+=a[i][y];
			}
		}
	}
	printf("\nsum of the elements of a column: %d",add);
}



/*
enter the size of row:3
enter the size of coln:3
enter a[0][0] : 2
enter a[0][1] : 7
enter a[0][2] : 1
enter a[1][0] : 3
enter a[1][1] : 5
enter a[1][2] : 4
enter a[2][0] : 8
enter a[2][1] : 9
enter a[2][2] : 6
enter row number:0
271
sum of element of a row: 10
enter cln number: 2
146
sum of the elements of a column: 11
*/
