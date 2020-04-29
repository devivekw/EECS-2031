/***********************************
* EECS 2031 - Lab 6		   
* Filename: calc.c	  	
* Author: Last name, first name	    
* Email: Your preferred email address	 	
* Login ID: Your EECS login ID	
************************************/

#include <stdio.h>
#include <stdlib.h>

int power(int base, int power){
    int i = 0;
    int result = 1;
    for (i = 0; i < power; i++){
        result*=base;
    }
    return result;
}


int strToInt( char str[]){

    int i, n = 0;
    for (i = 0; str[i] != '\0'; i++){
        n = n * 10 + (str[i] - '0');
    }
    return n;
}


int main( int argc, char *argv[] )
{
  int result = 0;  /* stores the result of the arithmetic operation */


  /*****************************************/
  /***** ADD YOUR CODE BELOW THIS LINE *****/

    if (argc != 4){
        printf ("Usage: calc [operand_1] [operator] [operand_2]\n");
        return 0;
    }

    int num1 = strToInt(argv[1]);
    int num2 = strToInt(argv[3]);
    char operand = argv[2][0]; 


    if (operand == '+'){
        result = num1 + num2;
    }

    else if (operand == '-'){
        result = num1 - num2;
    }

    else if (operand == 'x'){
        result = num1 * num2;
    }

    else if (operand == '/'){
        result = num1 / num2;
    }

    else if (operand == '%'){
        result = num1 % num2;
    }

  /***** ADD YOUR CODE ABOVE THIS LINE *****/
  /*****************************************/

  /**** DO NOT ADD OR CHANGE ANYTHING BELOW THIS LINE ****/

  printf( "%d\n", result );
}
