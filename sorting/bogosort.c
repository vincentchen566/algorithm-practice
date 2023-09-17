#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

void bogosort(int* list, int size){
    int i,j;
    int temp;

    while(checklist(list, size)==0){
        
        for (i=0;i<size;i++){
            j=i+rand()/(RAND_MAX/(size-i)+1);
            temp = list[j];
            list[j] = list[i];
            list[i] = temp;            
        }

    }
    return;
}