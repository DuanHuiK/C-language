//
//  main.c
//  multiplication table
//
//  Created by Duan Huikai on 21/10/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int row;
    for (row = 1; row <= 10; row=row +1)
    {
        int col;
        for (col = 1; col <= row; col=col +1)
        { printf ("%4d", row *col );}
        printf("\n");
    }
    return 0;
}
