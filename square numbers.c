//
//  main.c
//  square numbers
//
//  Created by Duan Huikai on 21/10/2023.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int x;
    printf("Dear user!\n");
    printf("Enter a number, I will print its square!");
    scanf("%d",&x);
    x = x*x;
    printf("x square is: %d\n", x);
    return 0;
}
