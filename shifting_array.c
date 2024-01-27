//
//  main.c
//  shifting_array
//
//  Created by Duan Huikai on 26/01/2024.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, a, b, c, i;
    
    printf("Original array: ");
    for ( i = 0; i < 10; i++) {
        printf(" %d ", array[i]);
    }
    printf("\n");
    
    for (a = 1; a < 10; a++) {
        b = array[9];
        
        for (c = 9; c > 0; c--) {
            array[c] = array[c - 1];
        }
        array[0] = b;
        }
    printf("After rotation: ");
    for ( i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
          
    return 0;
}

/*  array[9] = a
    array[0] = array[9]
    for ( b = 1; b < 9, b++) {
        array [b-1] = array [b]
 }
 */
