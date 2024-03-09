//
//  main.c
//  Fibonacci
//
//  Created by Duan Huikai on 09/03/2024.
//

#include <stdio.h>

unsigned fib(unsigned n) {
    if (n <= 1)
     return n;
    else
        return fib(n - 1) + fib(n - 2);
}

int main(int argc, const char * argv[]) {
    int n = 5;
    printf("Fibonacci(%d) = %d\n", n, fib(n));
    return 0;
}
