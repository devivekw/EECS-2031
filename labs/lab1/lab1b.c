#include<stdio.h>

int main() 
{

    
    int c;
    int counter = 0;
    printf ("Enter a line>");
    c = getchar();
    while ( (c != EOF) && (c != '\n')){
        
        if (c==' '){
            counter = counter + 1;
        }
        c = getchar();

    }

    printf ("%d\n", counter);
}