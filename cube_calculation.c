//
//  main.c
//  cube_calculation
//
//  Created by Duan Huikai on 09/02/2024.
//

#include <stdio.h>

void cube(double edge, double *parea, double *pvolume) {
    
    *pvolume = edge * edge * edge;

    *parea = 6 * edge * edge;
}

int main(int argc, const char * argv[]) {
    double edge = 2.7;
    double volume, surface_area;

    cube(edge, &surface_area, &volume);

    printf("Volume of the cube: %lf\n", volume);
    printf("Surface area of the cube: %lf\n", surface_area);

    return 0;
}
