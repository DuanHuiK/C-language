//
//  main.c
//  menu_controlled_program
//
//  Created by Duan Huikai on 26/01/2024.
//

#include <stdio.h>

int restore_initial (void){
    printf("Restoring the initial value (n = 1)\n");
    return 1;}

int add_one (int n){
    printf("Add one to the current number\n");
    return n + 1;
}

int multiply_by_two (int n){
    printf("Multiplying the number by 2\n");
    return n * 2;
}

int negate (int n){
    printf("Negating the number\n");
    return -n;
}



int main(void) {
    int n=1, num;
    
    printf("Please choose from the following operation:\n");
    printf("Current value of n: %d\n", n);
    printf("0. Restore the initial value(n = 1)\n"
           "1. Add 1\n"
           "2.Negate the number(+/-)\n"
           "3.Multiple by 2\n"
           "9. Exit\n");
    do {
        scanf("%d",&num);
        switch (num) {
            case '0' : n = restore_initial()  ; break ;
            case '1' : n = add_one(n)  ; break ;
            case '2' : n = negate(n)  ; break ;
            case '3' : n = multiply_by_two(n)  ; break ;
            case '9' : printf("Closing the program!")  ; break ;
            default: printf("Invalid choice, choose again!"); break;
                
        };
    }
    while (num != 9);
    return 0;
}
