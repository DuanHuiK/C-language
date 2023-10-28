//
//  main.c
//  Length of the Line
//
//  Created by Duan Huikai on 27/10/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int length, minus;
    printf("Length of the line?\n");
    scanf("%d",&length);
    printf("+");
    minus = 0;
    while ( minus < length)
    {
        printf("-");
        minus=minus+1;
    }
    printf("+");
    return 0;
}
