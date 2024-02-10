//
//  main.c
//  sum_product
//
//  Created by Duan Huikai on 09/02/2024.
//

#include <stdio.h>

void sum_and_product(double num1, double num2, double *sum, double *product) {
    *sum = num1 + num2;

    *product = num1 * num2;
}

int main(int argc, const char * argv[]) {
    double num1, num2, sum, product;

    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    sum_and_product(num1, num2, &sum, &product);

    printf("Sum: %lf\n", sum);
    printf("Product: %lf\n", product);

    return 0;
}

