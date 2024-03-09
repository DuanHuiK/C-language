//
//  main.c
//  dynamic_extension_strings
//
//  Created by Duan Huikai on 08/03/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *stringcat(char *x, char *y) {
    size_t length_x = strlen(x);
    size_t length_y = strlen(y);

    char *result = (char *)malloc((length_x + length_y + 1) * sizeof(char));

    if (result == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    strcpy(result, x);
    strcat(result, y);
    free(x);
    return result;
}
char *copystring( char *source) {
    size_t length = strlen(source);

    char *copy = (char *)malloc((length + 1) * sizeof(char));

    if (copy == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    strcpy(copy, source);
    return copy;
}

int main(int argc, const char * argv[]) {
    char *x = copystring("apple");
    x = stringcat(x, "tree");
    printf("%s\n", x);
    free(x);
    return 0;
}
