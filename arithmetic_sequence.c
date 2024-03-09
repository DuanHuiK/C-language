//
//  main.c
//  arithmetic_sequence
//
//  Created by Duan Huikai on 09/03/2024.
//

#include <stdio.h>

int arithmetic_seq(int n, int start, int difference) {
    if (n == 1)
        return start;
    else
        return arithmetic_seq(n - 1, start, difference) + difference;
}

int geometric_seq(int n, int start, int multiplier) {
    if (n == 1)
        return start;
    else
        return geometric_seq(n - 1, start, multiplier) * multiplier;
}

int main(int argc, const char * argv[]) {
    printf("Arithmetic Sequence:\n");
    int arithmetic_start = 1;
    int arithmetic_difference = 5;
    for (int i = 1; i <= 10; i++) {
        printf("%d ", arithmetic_seq(i, arithmetic_start, arithmetic_difference));
    }
    printf("\n");
    
    printf("Geometric Sequence:\n");
    int geometric_start = 2;
    int geometric_multiplier = 2;
    for (int i = 1; i <= 10; i++) {
        printf("%d ", geometric_seq(i, geometric_start, geometric_multiplier));
    }
    return 0;
}
