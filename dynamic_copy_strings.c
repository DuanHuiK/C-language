//
//  main.c
//  dynamic_copy_strings
//
//  Created by Duan Huikai on 08/03/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *copystring(char *source) {
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
    char *str = copystring("apple");

    printf("Copied string: %s\n", str);

    free(str);

    return 0;
}

