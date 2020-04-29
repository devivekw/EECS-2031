/***********************************
* EECS 2031 - Assignment 2
* Filename: mm.c
* Author: Last name, first name
* Email: Your preferred email address	 	
* Login ID: Your EECS login ID	
************************************/

#include <stdio.h>
#include <stdlib.h>

/***************** DO NOT USE ARRAY INDEXING *****************/
/************** USE ONLY POINTERS IN THIS FILE ***************/

/* You may define additional functions and local variables. */
int strToInt(char str[])
{
	int i, n = 0;
	if (str[0] != '-')
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			n = n * 10 + (str[i] - '0');
		}
		return n;
	}
	else
	{
		for (i = 1; str[i] != '\0'; i++)
		{
			n = n * 10 + (str[i] - '0');
		}
		return (n * -1);
	}
}

/* 
   Save the three command-line arguments into nr1, nc1 and nc2.
 */

void get_args(char **argv, int *nr1, int *nc1, int *nc2)
{
	/*************** ADD YOUR CODE HERE ***************/
	*nr1 = strToInt(argv[1]);
	*nc1 = strToInt(argv[2]);
	*nc2 = strToInt(argv[3]);

	//remember to delete this
	//printf("nr1 = %i \nnc1 = %i \nnc2 = %i \n", *nr1, *nc1, *nc2);
}

/*
   Initialize a 2-dimensional array.  
   Element (i, j) is assigned value i+j.
 */

void initMatrix(int **a, int nrows, int ncols)
{
	/*************** ADD YOUR CODE HERE ***************/
	int i, j;
	for (i = 0; i < nrows; i++)
	{
		for (j = 0; j < ncols; j++)
		{
			a[i][j] = i + j;
		}
	}
}

/* 
   Multiply arrays a and b.  
   Array a has nr1 rows and nc1 columns.
   Array b has nc1 rows and nc2 columns.
   Allocate an array c having nr1 rows and nc2 columns.
   Compute a x b and store the result in array c.
   Return array c.
   If an error occurs (e.g., insufficient memory), return NULL pointer.
 */

int **matrix_mult(int **a, int **b, int nr1, int nc1, int nc2)
{
	/*************** ADD YOUR CODE HERE ***************/

	// Initalize variables
	int **array, i, j, k, tot = 0;

	// Allocating memory to created array
	array = (int **)malloc(nr1 * sizeof(int *));
	if (array == NULL)
	{
		printf("Insufficient memory for rows!\n");
		exit(1);
	}

	//Allocate memory for each row
	for (i = 0; i < nr1; i++)
	{
		array[i] = (int *)malloc(nc2 * sizeof(int));
		if (array[i] == NULL)
		{
			printf("Insufficient memory for cols!\n");
			exit(1);
		}
	}

	array = (int **)malloc(nr1 * sizeof(int *));

	for (i = 0; i < nr1; i++)
	{
		*(array + i) = (int *)malloc(nc2 * sizeof(int));
	}

	//multiply array
	for (i = 0; i < nr1; i++)
	{
		for (j = 0; j < nc2; j++)
		{
			for (k = 0; k < nc1; k++)
			{
				tot += a[i][k] * b[k][j];
			}
			array[i][j] = tot;
			tot = 0;
		}
	}

	return (array); /* replace this line with your code */
}

/************************* END OF FILE *************************/
