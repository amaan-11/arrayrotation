//
// Created by Amaan on 7/06/2025.
//


#include <stdio.h>

void reverse(int* arr, int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start++] = arr[end];
        arr[end--] = temp;
    }
}

void rotateArr(int* arr, int n, int d) {

    d %= n;

    reverse(arr, 0, d - 1);

    reverse(arr, d, n - 1);

    reverse(arr, 0, n - 1);
}

int main() {
    printf("Enter how many elements are gonna be in the array:");
    int n;
    scanf("%d", &n);
    printf("Array will be from 1 to %d\n", n);
    while (n <= 0) {
        printf("Please enter a valid number of elements: ");
        scanf("%d", &n);
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    int d;
    printf("Enter the number of positions by which to rotate the array: ");
    scanf("%d", &d);


    rotateArr(arr, n, d);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
