/*
S - Leyland Number

Problem Statement
You are given positive integers
A
A and
B
B.
Print the value
A
B
+
B
A
A
B
 +B
A
 .

Constraints
2
≤
A
≤
B
≤
9
2≤A≤B≤9
All input values are integers.
Input
The input is given from Standard Input in the following format:

A
A
B
B
Output
Print the answer as an integer.

Sample 1
Inputcopy	Outputcopy
2 8
320
For
A
=
2
,
B
=
8
A=2,B=8, we have
A
B
=
256
,
B
A
=
64
A
B
 =256,B
A
 =64, so
A
B
+
B
A
=
320
A
B
 +B
A
 =320.

Sample 2
Inputcopy	Outputcopy
9 9
774840978
Sample 3
Inputcopy	Outputcopy
5 6
23401
*/

#include <stdio.h>
#include <cmath>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    int Power_AB = pow(A, B);
    int Power_BA = pow(B, A);

    int Summation = Power_AB + Power_BA;

    printf("%d", Summation);

    return 0;
}