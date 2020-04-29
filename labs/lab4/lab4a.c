/****************************************
 EECS2031 –Lab 4c
 Author: Chomu, Homu
 Email: chomuhomu@my.yorku.ca
 EECS login ID: chomuhomu 
 ****************************************/
#include <stdio.h>

#define MAX_SIZE 500

void myStrInput ( char *s );
int myStrCmp( char *s1, char *s2 );
int stringLen( char *s);
int main() 
{
   char strg1[ MAX_SIZE ], strg2[ MAX_SIZE ];

   /* Input strings strg1 and strg2. */
   /* Assume that the length of each input string is less than 100 characters. */

   myStrInput( strg1 );
   myStrInput( strg2 );
   printf( "%i\n", myStrCmp( strg1, strg2 ));
}


/************* DO NOT MODIFY ANYTHING ABOVE THIS LINE, *************/
/************* EXCEPT THE HEADER CONTAINING YOUR INFO **************/


/* Function myStrInput
   Input: an array of char pointed to by pointer s.
   Output: the same array that stores the user's input string.
   Note: The length of each input string is less than the array size. 
   So no error checking for the string length is required. 
   Do not modify the function definition.
 */

void myStrInput ( char *s ){
   /* Add your code here. */
   /* Do not use array indexing. */
   /* You may define additional variables, except arrays. */
   /* Do not use any C library functions, except getchar(). */
   char c;
   int counter;
   while ((c=getchar())!=EOF && c!='\n'){
      *s=c;
      s++; 
   }
}



/* Function myStrCmp
   Input: two strings pointed to by pointers s1 and s2.
   Output: returns the first position (array index) where the two strings differ. 
   Special cases:
   1. Two strings are equal: returns -1.
   2. One string is a substring of the other (e.g., "CSE2031" and "CSE2031E3.0"):
	returns the length of the shorter string.
   Do not modify the function definition.
 */

int myStrCmp( char *s1, char *s2 ){
   /* Add your code here. */
   /* Do not use array indexing. */
   /* You may define additional variables, except arrays. */
   /* Do not use any C library functions. */
   int len1=stringLen(s1),len2=stringLen(s2),i,len;
   if (len1>len2){len=len2;}
   else if (len1==len2){
      len=len1;
      for (i=0; (i<len && *s1==*s2) ;i++){
         s1++; s2++;
      }
      if (i==len){return -1;}
      else{return i;}
   }
   else{len=len1;}
   
   for (i=0; (i<len && *s1==*s2) ;i++){
      s1++; s2++;
   }
   return i;
}


/* Function stringLen
   Input: a string as a pointer
   Output: returns the length of the string
   Do not modify the function definition.
 */

int stringLen(char *s){
   int n;
   for (n=0; *s != '\0'; s++){n++;}
   return n;
}