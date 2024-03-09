//
//  main.c
//  print_text
//
//  Created by Duan Huikai on 09/03/2024.
//

#include <stdio.h>

void print_string_1(char *text) {
    if (text[0] == '\0')
        return;
    putchar(text[0]);
    printf("%s", text + 1);
}

void print_string_2(char *text) {
    if (text[0] == '\0')
        return;
    putchar(text[0]);
    print_string_2(text + 1);
}

int main(int argc, const char * argv[]) {
    print_string_1("word");
    print_string_2("word");
    return 0;
}

