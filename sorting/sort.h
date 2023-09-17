void main();
void initializeList(int *a, int b);
void sortList(int *list, int size, int algo);

void bogosort(int *list, int size);
int checklist(int* list, int size);

void mergesort(int *list, int size, int low, int high);
void swap(int* a, int* b);
void merge(int* list, int size, int low, int middle, int high);

void quicksort(int* list, int low, int high);
int partition(int* list, int low, int high);