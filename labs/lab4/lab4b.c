/****************************************
 EECS2031 –Lab 4b
 Author: Chomu, Homu
 Email: chomuhomu@my.yorku.ca
 EECS login ID: chomuhomu 
 ****************************************/

#include <stdio.h>

#define MAX_SIZE 100

double power(int base, int power){
    int i = 0;
    double result = 1.0;
    if (power>=0){
        for (i = 0; i < power; i++){
        result*=base;
        }
    }
    else{
        for (i = 0; i < (power*-1); i++){
        result/=base;
        }
    }
    return result;
}

int isValid(char c){
    if((c>='0' && c<='9')||c=='.'){return 1;}
    else{return 0;}
}

float convert(char strg[],int len){
    int i,dot;
    double result;
    for (i=0;i<len;i++){if (strg[i]=='.'){dot = i;}}

    for (i=0;i<len;i++){
        if (i < dot){
            result += (strg[i]-'0') * power(10,dot-i-1);
        }
        else if (i>dot){
            result += (strg[i] -'0')* power(10,dot-i);
        }
    }
    return result;
}

int main() {

    char c,my_strg[ MAX_SIZE ];
    double my_number = 0.0;

    /********** Add your code below this line **********/
    int counter=0;
    while ((c=getchar())!=EOF && c!='\n'){
        if (isValid(c)){
            my_strg[counter]=c;
            counter++;
        }
        else{
            printf("error\n");
            break;
        }
    }
    my_number = convert(my_strg,counter);
    /********** Add your code above this line **********/
    printf( "%.2f\n", my_number );
}