//
//  main.c
//  array_least
//
//  Created by Duan Huikai on 26/01/2024.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int Array[10] = {25, 69, 54, 8, 77, 6, 29, 10, 3, 98};
    int i;
    printf("Array: ");
    for (i = 0; i < 10; i++) {
        printf(" %d ", Array[i]);
    }
    printf("\n");
    printf("The array: ");
    for (i = 0; i < 10; i++) {
        printf("[%d]=%d ", i, Array[i]);
    }
    printf("\n");

    int least = 0;
    for ( i = 1; i < 10; i++) {
        if (Array[i] < Array[least]) {
            least = i;
        }
    }

    printf("The least: %d\n", Array[least]);
    printf("Marked: ");
    for (int i = 0; i < 10; i++)
    {if (Array[i] != Array [least])
        printf(" %d ",Array[i]);
    else printf(" %d [MIN] ", Array[least]);
        
    }
    printf("\n");

    return 0;
}
