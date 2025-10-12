/*
F - Circle

Write a program which calculates the area and circumference of a circle for given radius r.

Input
A real number r is given.

Output
Print the area and circumference of the circle in a line. Put a single space between them. The output should not contain an absolute error greater than 10-5.

Constraints
0 < r < 10000
Inputcopy	Outputcopy
2
12.566371 12.566371
Inputcopy	Outputcopy
3
28.274334 18.849556
*/

#include <stdio.h>

int main()
{
    double PI = 3.141592653589793;
    /*
    Formula
    Area = PI * (r*r)
    Circumference = 2 * PI * r.
    */

    double r;
    scanf("%lf", &r);
    double Area = PI * (r * r);
    double Circumference = 2 * PI * r;

    printf("%lf %lf\n", Area, Circumference);

    return 0;
}