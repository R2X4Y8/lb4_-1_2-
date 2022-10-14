#include <stdlib.h>
#include <math.h>
#include "QE.h"

QResult* solveEquation(double a, double b, double c) 
{
    QResult *result = (QResult*) malloc(sizeof(QResult));
    result->type = 0;
    double dis;

if (a!=0 && b!=0 && c!=0)
{
	dis = b*b - 4*a*c;
            if (dis >= 0) 
			{
                result->x1 = (-b - sqrt(dis)) / (2 * a);
                result->x2 = (-b + sqrt(dis)) / (2 * a);
                result->type = 1;
            } 
			else 
                result->type = 0;
}
else if(a==0 || b==0 || c==0)
{
	
}
else
	result->type = -1;	

    return result;
}
