/***********************************
* Filename: concat.c  	
* Author: Last name, first name	    	
* Login ID: Your EECS login ID	
************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5000

  /*****  YOU MAY ADD YOUR OWN FUNCTION(S) HERE.  *****/


/* Concatenate several strings into one long string in the input order.
   Input: zero or more strings as command-line arguments.
   Output: a long string formed by concatenating the input strings 
   and displayed on the standard output. 
 */

void main( int argc, char **argv )
{
  char *longStr;  /* stores the input strings concatenated one after another */


  /*****************************************/
  /***** ADD YOUR CODE BELOW THIS LINE *****/
  
  /* Do not use any C string library functions such as strlen, strcpy, strcat, etc. */
  /* You have to use pointers in this program. */



  /***** ADD YOUR CODE ABOVE THIS LINE *****/
  /*****************************************/

  /**** DO NOT ADD OR CHANGE ANYTHING BELOW THIS LINE ****/

  printf( "%s\n", longStr );
}

