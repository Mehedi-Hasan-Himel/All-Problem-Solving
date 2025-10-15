/*
G - Rotate
Problem Statement
Let
x
y
z
xyz denote the
3
3-digit integer whose digits are
x
x,
y
y,
z
z from left to right.

Given a
3
3-digit integer
a
b
c
abc none of whose digits is
0
0, find
a
b
c
+
b
c
a
+
c
a
b
abc+bca+cab.

Constraints
a
b
c
abc is a
3
3-digit integer
a
b
c
abc none of whose digits is
0
0.
Input
Input is given from Standard Input in the following format:

a
b
c
abc
Output
Print the answer.

Sample 1
Inputcopy	Outputcopy
123
666
We have
123
+
231
+
312
=
666
123+231+312=666.

Sample 2
Inputcopy	Outputcopy
999
2997
We have
999
+
999
+
999
=
2997
999+999+999=2997.
*/

#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    int a = num / 100;
    int b = (num / 10) % 10;
    int c = num % 10;

    int abc = 100 * a + 10 * b + c;
    int bca = 100 * b + 10 * c + a;
    int cab = 100 * c + 10 * a + b;

    int sum = abc + bca + cab;

    printf("%d\n", sum);

    return 0;
}
