/* 
I - Power

Problem Statement
Given integers 
A
A and 
B
B, print the value 
A
B
A 
B
 .

Constraints
1
≤
A
,
B
≤
9
1≤A,B≤9
All values in the input are integers.
Input
The input is given from Standard Input in the following format:

A
A 
B
B
Output
Print the answer.

Sample 1
Inputcopy	Outputcopy
4 3
64
4
3
=
64
4 
3
 =64, so 
64
64 should be printed.

Sample 2
Inputcopy	Outputcopy
5 5
3125
Sample 3
Inputcopy	Outputcopy
8 1
8
*/

#include <stdio.h>
#include <math.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int result = (int)pow(A, B);

    printf("%d\n", result);
    return 0;
}

