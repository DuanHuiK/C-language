//
//  main.c
//  circle
//
//  Created by Duan Huikai on 26/01/2024.
//

#include <stdio.h>
#include <math.h>

typedef struct {
    float x, y, radius;
} Circle;

int overlap(Circle circle_1, Circle circle_2) {
    float distance = sqrt(pow(circle_2.x - circle_1.x, 2) + pow(circle_2.y - circle_1.y, 2));
    return distance < circle_1.radius + circle_2.radius;
}

int main(int argc, const char * argv[]) {
    Circle circle_1, circle_2;
    
    printf("Enter the x coordinate of the center of your first circle \n");
    scanf("%f", &circle_1.x);
    printf("Enter the y coordinate of the center of your first circle \n");
    scanf("%f", &circle_1.y);
    printf("Enter the radius of your first circle \n");
    scanf("%f", &circle_1.radius);
    printf("\n");
    printf("Enter the x coordinate of the center of your first circle\n ");
    scanf("%f", &circle_2.x);
    printf("Enter the y coordinate of the center of your first circle \n");
    scanf("%f", &circle_2.y);
    printf("Enter the radius of your first circle\n");
    scanf("%f", &circle_2.radius);
    printf("\n");
    if (overlap(circle_1, circle_2))
        printf("The circles overlap!\n");
    else
        printf("The circles don't overlap!\n");

    return 0;
}
