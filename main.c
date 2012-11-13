//
//  main.c
//  Triangle
//
//  Created by Susan Lueck on 11/12/12.
//  Copyright (c) 2012 Susan Lueck. All rights reserved.
//

#include <stdio.h>
#include <math.h>

// Homework: The interior angles of a triangle must add up to 180 degrees

double remainingAngle(double angA, double angB)
{
    return 180 - angA - angB;
}

// Just for fun: a^2 + b^2 = c^2

double remainingSide(double sideA, double sideB)
{
    double sideC = sqrt((pow(sideA,2) + pow(sideB,2)));
    return sideC;
}

int main(int argc, const char * argv[])
{
    
    double angleA = 30.0;
    double angleB = 60.0;
    double angleC = remainingAngle(angleA, angleB);
    
    double sideA = 3;
    double sideB = 4;
    double sideC = remainingSide(sideA, sideB);

    printf("Given Angle 1 = %.2f and Angle 2 = %.2f\n", angleA, angleB);
    printf("    The third angle is: %.2f\n\n",angleC);
    printf("Given Side 1 = %.2f and Side 2 = %.2f\n", sideA, sideB);
    printf("    The third side is:  %.2f\n",sideC);
    return 0;
}

