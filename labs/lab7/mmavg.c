/***********************************
* EECS 2031 - Lab 7		   
* Filename: mmavg.c	  	
* Author: Chomu, Homu	    
* Email: chomuhomu@my.yorku.ca	 	
* Login ID: chomuhomu	
************************************/

#include <stdio.h>
#include <stdlib.h>

/*****  YOU MAY ADD YOUR OWN FUNCTION(S) HERE.  *****/
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

float average(int list[], int len)
{
	float result;
	int i;
	for (i = 0; i < len; i++)
	{
		result += list[i];
	}
	return result / len;
}

int maximum(int list[], int len)
{
	int result = list[0], i;
	for (i = 0; i < len; i++)
	{
		if (list[i] > result)
		{
			result = list[i];
		}
	}
	return result;
}

int minimum(int list[], int len)
{
	int result = list[0], i;
	for (i = 0; i < len; i++)
	{
		if (list[i] < result)
		{
			result = list[i];
		}
	}
	return result;
}

/* Function main()
   Input: a set of integers as command-line arguments.
   Output: the maximum, minimum and average of the above set displayed on the standard output.
 */

main(int argc, char *argv[])
{
	int max, min;
	float avg;

	/*****************************************/
	/***** ADD YOUR CODE BELOW THIS LINE *****/

	int list[argc - 1], len = argc - 1, i;

	if (argc <= 1)
	{
		printf("Usage: mmavg int1 int2 int3 ...\n");
		return 0;
	}

	for (i = 0; i < len; i++)
	{
		list[i] = strToInt(argv[i + 1]);
	}

	avg = average(list, len);
	max = maximum(list, len);
	min = minimum(list, len);

	/***** ADD YOUR CODE ABOVE THIS LINE *****/
	/*****************************************/

	/**** DO NOT ADD OR CHANGE ANYTHING BELOW THIS LINE ****/

	printf("%d %d %.2f\n", max, min, avg);
}
