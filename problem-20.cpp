/*
T - X Cubic
Write a program which calculates the cube of a given integer x.

Input
An integer x is given in a line.

Output
Print the cube of x in a line.

Constraints
1 ≤ x ≤ 100
Inputcopy	Outputcopy
2
8
Inputcopy	Outputcopy
3
27
*/

#include <stdio.h>
#include <cmath>

int main()
{
    int x;
    scanf("%d", &x);

    int Cubic_Of_X = pow(x, 3);

    printf("%d\n", Cubic_Of_X);
    return 0;
}
