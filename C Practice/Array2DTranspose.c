	#include <stdio.h>
	int main() 
	
	{
	  	int a[10][10], transpose[10][10], r, c;
	  	int i,j;
		printf("Enter rows of matrix: ");
	  	scanf("%d %d", &r);
	  
		printf("\nEnter  columns of matrix: ");
	 	scanf("%d %d", &c);
	
	  // asssigning elements to the matrix
	  	printf("\nEnter  elements  of %d x %d:\n",r,c);
	  	for ( i = 0; i < r; ++i)
	  	for ( j = 0; j < c; ++j) 
	  {
	    printf("Enter element a%d%d: ", i + 1, j + 1);
	    scanf("%d", &a[i][j]);
	  }
	
	  // printing the matrix a[][]
		printf("\nEntered matrix: \n");
		for ( i = 0; i < r; ++i)
		for ( j = 0; j < c; ++j) 
	  {
	    printf("%d  ", a[i][j]);
	    if (j == c - 1)
	    printf("\n");
	  }
	
	  // computing the transpose
	  for ( i = 0; i < r; ++i)
	  for ( j = 0; j < c; ++j) 
	  {
	    transpose[j][i] = a[i][j];
	  }
	
	  // printing the transpose
	  printf("\nTranspose of the matrix:\n");
	  for ( i = 0; i < c; ++i)
	  for ( j = 0; j < r; ++j) 
	  {
	    printf("%d  ", transpose[i][j]);
	    if (j == r - 1)
	    printf("\n");
	  }
	  return 0;
	}
