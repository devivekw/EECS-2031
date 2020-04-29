#include<stdio.h>

int main() 
{

    
    int c;
    int counter = 0;

    c = getchar();
    while ( (c != EOF) && (c != '\n')){
        
        if (c==' ' || c=='\t'){
            counter = counter + 1;
        }
        c = getchar();

    }

    printf ("%d\n", counter);
}