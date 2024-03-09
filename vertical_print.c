//
//  main.c
//  Vertical_print
//
//  Created by Duan Huikai on 08/03/2024.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char word[100];
    printf("Enter charcters: ");
    scanf("%s", word);

    int length = strlen(word);
    printf("%d characters.\n", length);
    
    for (int i = 0; i < length; i++)
        printf("%c\n", word[i]);
    
    return 0;
}
