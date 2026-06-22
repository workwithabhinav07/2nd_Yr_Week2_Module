/*A librarian receives book serial numbers one by one and wants to place each new book in the correct
position.
Write a program using Insertion Sort to arrange book numbers.*/
#include <stdio.h>
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[100], n, i;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    printf("Enter the serial numbers of the books:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    insertionSort(arr, n);
    printf("Sorted serial numbers of the books:\n");
      
    for(i =0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}