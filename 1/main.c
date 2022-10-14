#include <stdio.h>
#include <stdlib.h>
#include "QE.h"

int main(int argc, char *argv[]) 
{
	 printf("\n");
    if (argc != 4) 
	{
        printf("Wrong number of arguments (expected 3 after call program)\n");
        return -1;
    } 
	else 
	{
        double a = atof(argv[1]);
        double b = atof(argv[2]);
        double c = atof(argv[3]);

        QResult *qeResult = solveEquation(a, b, c);
        switch(qeResult->type) 
		{
            case -1:
                printf("Not quadratic equation\n");
                break;
            case 0:
                printf("Discriminant less than zero\n");
                break;
            case 1:
                printf("Quadratic equation:\nx1 = %g, x2 = %g\n", qeResult->x1, qeResult->x2);
                break;
            default:
                printf("Wrong Solution Selector\n");
        }
   }
 printf("\n");
    return 0;
}
