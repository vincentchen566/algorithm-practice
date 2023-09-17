void quicksort(int* list, int low, int high){
    int p;

    if (low < high){
        p = partition(list, low, high);
        quicksort(list, low, p-1);
        quicksort(list, p+1, high);
    }
}

int partition(int* list, int low, int high){
    int i;
    int p;          //index of pivot element
    int firsthigh;  

    p=high;         //set pivot to last element in subset
    firsthigh = low;

    for (i=low; i<high; i++){
        if (list[i] < list[p]){
            swap(&list[i], &list[p]);
            firsthigh++;
        }
    }

    swap(&list[p], &list[firsthigh]);
    return(firsthigh);
}