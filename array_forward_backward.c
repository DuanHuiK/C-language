//
//  main.c
//  array_forward_backward
//
//  Created by Duan Huikai on 09/03/2024.
//
#include <stdio.h>

void print_array_forwards(int arr[], int size, int i) {
    if (i == size)
        return;
    printf("%d ", arr[i]);
    print_array_forwards(arr, size, i + 1);
}

void print_array_backwards(int arr[], int size, int i) {
    if (i < 0)
        return;
    printf("%d ", arr[i]);
    print_array_backwards(arr, size, i - 1);
}

int main(int argc, const char * argv[]) {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    printf("Array 1 Forwards: ");
    print_array_forwards(arr1, 5, 0);
    printf("\nArray 1 Backwards: ");
    print_array_backwards(arr1, 5, 4);
    printf("\n");

    printf("Array 2 Forwards: ");
    print_array_forwards(arr2, 10, 0);
    printf("\nArray 2 Backwards: ");
    print_array_backwards(arr2, 10, 9);
    printf("\n");

    return 0;
}
