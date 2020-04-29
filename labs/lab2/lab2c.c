#include<stdio.h>

int main()
{
    
    int count=0;
    int c;
    int sum=0;
    c=getchar();
    
    while( (c != EOF) && (c != '\n')){
        if (isdigit(c) == 1){
            sum = sum + (c - 48);
            count = count + 1;
        }
        c=getchar();    
    }
    
    printf ("%d\t%d\n",count,sum);
}