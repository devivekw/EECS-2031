#include <stdio.h>

int maxElement (int array[],int c){
    int max = array[0];
    int i;
    for (i = 0; i <=c ; i++){
        if (max<=array[i]){
            max = array[i];
        }
    }
    return max;
}

int minElement (int array[],int c){
    int min = array[0];
    int i;
    for (i = 0; i <=c ; i++){
        if (min>=array[i]){
            min = array[i];
        }
    }
    return min;
}


int main()
{
    int array[100];
    int count;

    while (1){
        scanf("%d",&array[count]);
        if (array[count] == 0){
            break;
        }
        count++;
    }
    printf("%d\t%d\n",maxElement(array,count),minElement(array,count));

}