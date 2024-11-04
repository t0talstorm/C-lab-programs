#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int binarysearch(int arr[] , int size , int key);
int linearsearch(int arr[] , int size , int key);
void bubbleSorter(int arr[] , int size);

void main(){

    int arr[20] = {1 , 3 , 5 , 8 , 25 , 7 , 5 , 56 , 2 , 45 , 6 ,7  , 5 ,5  ,6  , 100 , 102 , 81 , 9 ,20};

    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 81;

    printf("\nusing linear search : ");
    int index = linearsearch( arr ,  size , key);
    
    if (index != -1){
    printf("\n key is at index %d " , index);
    }
    else{
        printf("\nThe key was not found in the search");
    }

    bubbleSorter(arr , size);

    printf("\n\nsorted array : ");
    for (int i = 0 ; i < size ; i++){
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    printf("using binary search : ");
    int indexbinary = binarysearch(arr , size , key);
     if (indexbinary != -1){
    printf("\n key is at index binary %d " , indexbinary);
    }
    else{
        printf("\nThe key was not found in the search");
    }

    

}

int linearsearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}


int binarysearch(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2; 
        
        if (arr[mid] == key) {
            return mid; 
        }
        
        if (arr[mid] < key) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }
    
    return -1; 
}

void bubbleSorter(int arr[], int n) {

    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
           
            }
        }
    }
}
