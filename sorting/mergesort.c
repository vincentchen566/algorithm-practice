#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void mergesort(int *list, int size, int low, int high){
    int middle;

    if (low<high){
        middle = (low+high)/2;

        mergesort(list, size, low, middle);
        mergesort(list, size, middle+1, high);

        merge(list,size,low, middle, high);
    }
}

void merge(int* list, int size, int low, int middle, int high){
    int counter1 = 0;
    int counter2 = 0;
    int listCounter = low;

    int size1 = middle - low + 1;
    int size2 = high - middle;

    int *list1 = (int*) malloc(size1 * sizeof(int));
    int *list2 = (int*) malloc(size2 * sizeof(int));


    for (int i=low; i<=middle; i++){
        list1[i-low] = list[i];
    }

    for (int i=middle+1; i<=high;i++){
        list2[i-middle-1] = list[i];
    }




    while (counter1 < size1 && counter2 < size2){
        if (counter1>=size1){
            list[listCounter] = list2[counter2];
            counter2++;
        } else if (counter2 >= size2){
            list[listCounter] = list1[counter1];
            counter1++;
        } else if (list1[counter1] < list2[counter2]){
            list[listCounter] = list1[counter1];
            counter1++;
        } else if (list2[counter2] <= list1[counter1]){
            list[listCounter] = list2[counter2];
            counter2++;
        } else{
            printf("error!");
            return;
        }

        listCounter++;
        free(list1);
        free(list2);

        return;
    }




}