/*A teacher wants to arrange students' exam scores in ascending order to prepare the result sheet.
Write a program using Bubble Sort.*/
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int scores[n];
    printf("Enter the exam scores: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }
    bubbleSort(scores, n);
    printf("Exam scores in ascending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", scores[i]);
    }
    return 0;
}