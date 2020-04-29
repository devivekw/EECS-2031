/****************************************
 EECS2031 –Lab 4c
 Author: Chomu, Homu
 Email: chomuhomu@my.yorku.ca
 EECS login ID: chomuhomu 
 ****************************************/

#include <stdio.h>

void power_of_ten(int k, double  *p){
    *p = 1.0;
    double ten = 10.0;
    int i;
    if (k>=0){
        for (i=0; i < k; i++){*p*=ten;}
    }
    else{
        for (i=0; i < (k*-1); i++){*p=*p/ten;}
    }
}  

int main()
{
   int k;
   double my_double;

   scanf( "%d", &k );
   
   power_of_ten(k,&my_double);
   /* Hint: my_double must be passed by reference (i.e., using a pointer). */
   
   /* Do not modify the following line. */
   printf( "%.15lf\n", my_double );
}