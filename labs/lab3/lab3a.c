#include <stdio.h>

#define MAX_SIZE 100

void reverse (char strg[], int i){
    int start = 0;
    int end = i - 1;
    char temp;
    while (start <= end){
        temp = strg[end];
        strg[end] = strg[start];
        strg[start] = temp;
        start++;
        end--;
    }
    printf( "%s\n", strg );
}

int main() {

    char my_strg[MAX_SIZE];
    int c;
    int i =0;
    c = getchar();
    while ( c != EOF && c != '\n' ){
        my_strg[i]=(c);
        
        i++;    
        c = getchar();
    }
    reverse(my_strg,i);
}