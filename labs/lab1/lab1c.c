#include<stdio.h>

int main() 
{
    float inch;
    float cm; 

    scanf ("%f", &inch );
    

    while (inch != 0){
        
        cm = inch * 2.54;
        
        printf ("%.2f\n", cm);
        printf ("Enter inch value>");
        scanf ("%f", &inch );
    }
    
}