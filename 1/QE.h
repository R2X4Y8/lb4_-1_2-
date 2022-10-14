#ifndef SOLVE_H
#define SOLVE_H

typedef struct 
{
    double x1;
    double x2;
    int type; // -1 - not quadratic equation or | 0 - discriminant < 0 | 1 - quadratic
} QResult;

QResult* solveEquation(double a, double b, double c);

#endif
