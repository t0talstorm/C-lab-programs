#include <stdio.h>

void inputArray(int arr[], int size);
void selectionSort(int arr[], int size);
void printArray(int arr[], int size);

int main() {
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];
    inputArray(arr, size);

    printf("Array before sorting: ");
    printArray(arr, size);

    selectionSort(arr, size);

    printf("Array after sorting: ");
    printArray(arr, size);

    return 0;
}


void inputArray(int arr[], int size) {
    printf("Enter %d integers:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void selectionSort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < size; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}


void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
