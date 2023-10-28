//
//  main.c
//  equation
//
//  Created by Duan Huikai on 27/10/2023.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double a, b, c, x1, x2,DeltaX;
    
    
    printf("Give a from the equation ax^2+bx+c=0.\n");
    scanf("%lf", &a);
    printf("Give b from the equation ax^2+bx+c=0.\n");
    scanf("%lf", &b);
    printf("Give c from the equation ax^2+bx+c=0.\n");
    scanf("%lf", &c);
    
    DeltaX = sqrt((b*b)-(4*a*c));
    x1 = (-b+DeltaX)/(2*a);
    x2 = (-b-DeltaX)/(2*a);
    
    if ((b*b)-(4*a*c) < 0){
        printf("There are no solutions!");}
    else if (DeltaX == 0) {
        printf("The doulbe solutions is %.1f!", x1 );}
    else
    {printf("The two solutions are %.1f, %.1f!", x1, x2 );}
        
    return 0;
}
