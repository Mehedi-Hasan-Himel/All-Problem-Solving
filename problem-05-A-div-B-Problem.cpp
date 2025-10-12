/*
E - A / B Problem

A/B Problem
Write a program which reads two integers a and b, and calculates the following values:

a ÷ b: d (in integer)
remainder of a ÷ b: r (in integer)
a ÷ b: f (in real number)
Input
Two integers a and b are given in a line.

Output
Print d, r and f separated by a space in a line. For f, the output should not contain an absolute error greater than 10-5.

Constraints
1 ≤ a, b ≤ 109
Inputcopy	Outputcopy
3 2
1 1 1.50000

*/

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int d = a / b;       // integer division
    int r = a % b;       // remainder
    double f = (double)a / b; // real division

    printf("%d %d %.5lf\n", d, r, f);

    return 0;
}
