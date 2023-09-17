#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "sort.h"

#define LISTSIZE 10 //change to change size of list

void main(){
    int list[LISTSIZE];
    initializeList(list, LISTSIZE);
    int algo = 2; //change to edit type of algorithm used


    sortList(list, LISTSIZE, algo);


}

void initializeList(int *list, int size){
    int i;
    srand(time(NULL)); //seed randomizer
    
    //generate numbers for the list
    for (i=0; i<size; i++){
        list[i] = rand();
    }

    //print unsorted list
    for (i=0; i<size; i++){
        printf("%d ", list[i]);
        
    } printf("\n");
 
    return;
}


void sortList(int *list, int size, int algo){
    switch (algo){
        case 1:
            //mergesort
            mergesort(list, size, 0, LISTSIZE-1);
            break;

        case 2:
            //quicksort
            quicksort(list,0,LISTSIZE-1);
            break;

        default:
            //the best sort
            bogosort(list, size);
            break;
    } 

    //print end
    for (int i=0; i<size; i++){
        printf("%d ", list[i]);
    }
}


int checklist(int* list, int size){
    for (int i=0; i<size-1;i++){
        if (list[i]>list[i+1]){
            return 0;
        }
    }
    return 1;
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}