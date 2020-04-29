/***********************************
* Filename: converts2i.c  	
* Author: Last name, first name	    	
* Login ID: Your EECS login ID	
************************************/


#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void myStrInput ( char *s );
int str2int ( char *s );

main()
{
   char strg[ MAX_SIZE ];
   myStrInput( strg );
   printf( "%d\n", str2int( strg ) );
}



/************* DO NOT MODIFY ANYTHING ABOVE THIS LINE, *************/
/************* EXCEPT THE HEADER CONTAINING YOUR INFO **************/


/************* YOU MAY ADD YOUR OWN FUNCTION(S) HERE **************/


/* Function myStrInput
   Input: an array of char pointed to by pointer s.
   Output: the same array that stores the user's input string.
   Note: The length of each input string is less than the array size.
   So no error checking for the string length is required.
   Do not modify the function definition.
 */

void myStrInput ( char *s )
{

   /* Add your code here. */
   /* You may define additional variables, or call functions that you write. */
   /* Do not use any C library functions, except getchar(). */
   /* You may use either array indexing or pointers or both in this program. */

}




/* Function str2int
   Input: a string pointed to by pointer s.
   Output: returns the integer number represented by string s.
   Do not modify the function definition.
 */

int  str2int( char *s )
{

   /* Add your code here. */
   /* You may define additional variables, or call functions that you write. */
   /* Do not use any C library functions. */
   /* You may use either array indexing or pointers or both in this program. */

   return( 0 );   /* replace this line with your own code */

}


/**************************** END OF FILE ****************************/

