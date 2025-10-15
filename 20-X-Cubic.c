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

int main() {
    int x;
    scanf("%d", &x);

    int cubic_of_x = x * x * x;

    printf("%d\n", cubic_of_x);

    return 0;
}

