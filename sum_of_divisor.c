//
//  sum_of_divisor.c
//  sum_of_divisor
//
//  Created by Duan Huikai on 02/12/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int Number,a,b=0;
    printf("Give me a perfect number:");
    scanf("%d", &Number);
    a=1;
    while (a < Number)
        {
            if (Number % a == 0);
                b = b+ a;
            a=a+1;
        }
     
    if ( a== Number)
            printf("%d is a perfect number", Number);
    else
            printf("%d is not a perfect number", Number);
    
    return 0;
}
