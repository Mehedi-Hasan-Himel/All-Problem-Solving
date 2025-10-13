/*
J - Off By One
You just bought a new calculator, but it seems to have a small problem: all its results have an extra
1
1 appended to the end.
For example, if you ask it for 3 + 5, it’ll print 81, and 4 + 12 will result in 161.

Given
A
A and
B
B, can you predict what the calculator will print when you ask it for
A
+
B
A+B?

Input Format
The first and only line of input will contain two space-separated integers
A
A and
B
B.
Output Format
Print a single integer: the calculator’s output when you enter
A
+
B
A+B into it.

Constraints
1
≤
A
,
B
≤
50
1≤A,B≤50
Sample 1
Inputcopy	Outputcopy
3 5
81
3
+
5
=
8
3+5=8, and the calculator appends a
1
1 to print
81
81.
Sample 2
Inputcopy	Outputcopy
4 12
161
4
+
12
=
16
4+12=16, and the calculator appends a
1
1 to print
161
161.
*/

#include <stdio.h>
int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    int summation = (a + b);
    int final_sum = (summation * 10) + 1;

    printf("%d", final_sum);

    return 0;
}