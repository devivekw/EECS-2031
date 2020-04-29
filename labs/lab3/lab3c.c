#include <stdio.h>
#include <math.h>

#define MAX_SIZE 100

void exit(int bs);

int power(int base, int power){
    int i = 0;
    int result = 1;
    for (i = 0; i < power; i++){
        result*=base;
    }
    return result;
}

int isHex(int c){
    if ((c>='0' && c<='9') || (c>='a' && c<='f') ||(c>='A' && c<='F')){return 1;}
    else{return 0;}
}

int valueHex(char c){
    if (c>='0' && c<='9'){return c-'0';}
    else if(c>='a'&&c<='f'){return c-87;}
    else if(c>='A'&&c<='F'){return c-55;}
}

int main() {

    char my_strg[ MAX_SIZE ];   /* to store a hexadecimal number in the form of an array of char */
    int my_int = 0;
    int counter = 0;
    int c;
    int isNegative;
    c=getchar();

    // input and simultaneously checking if it is octal and appending to the array
    while(c != EOF && c != '\n'){
        if (isHex(c)){
            my_strg[counter]=c;
            counter++;
        }
        else if(c == '-'){
            isNegative = 1;
        }
        else{
            my_int=-1;
            break;
        }
        c=getchar();
    }

    //print if error
    if (my_int == -1){
        printf ("error");
        exit(0);
    }
    
    //reverse the array
    int start = 0;
    int end = counter - 1;
    char temp;
    while (start <= end){
        temp = my_strg[end];
        my_strg[end] = my_strg[start];
        my_strg[start] = temp;
        start++;
        end--;
    }
    
    //do the hex shit
    int i;
    for (i = 0; i<counter;i++){
        my_int+=power(16,i)*valueHex(my_strg[i]);
    }
    
    //output the decimal integer
    if (isNegative){
        printf( "-%d\n", my_int );  
    }
    else{
        printf( "%d\n", my_int );  
    }
    
    
}