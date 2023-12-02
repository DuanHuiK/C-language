//
//  main.c
//  ten_factorial
//
//  Created by Duan Huikai on 01/12/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, k;
    k=1;
    printf("This function will give the integral one to ten\n");
    for (n=10;n>=2;n=n-1)
    { if(n>=10)
        k=n ;
    else k= k*n;
    }
    printf("10! = %d\n", k);
    return 0;
}

