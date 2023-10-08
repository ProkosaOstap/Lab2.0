#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
    // Initialisation of data
    double x, z1, z2;
    printf("Enter the x: ");
    scanf("%2Lf", &x);
    z1 = 1 - pow(sin(2*x), 2) / 4 + cos(2*x);
    z2 = pow(cos(x), 2) + pow(cos(x),4);

    printf("z1 = %2Lf, z2 = %2Lf", z1, z2);

    getch();


}