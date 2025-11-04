/* 
N Times

Problem Statement

I know and you also know that you love practice day so much. So this task is for you. You will be given a positive integer N, you need to print "I Love Practice" N times.

Here positive integer means those integers that are greater than 0.

Input Format

You will be given a positive integer N.
Constraints

1 <= N <= 1000
Output Format

Output "I Love Practice" N times. Don't forget to put a new line after every line.
Sample Input 0

5
Sample Output 0

I Love Practice
I Love Practice
I Love Practice
I Love Practice
I Love Practice
Sample Input 1

2
Sample Output 1

I Love Practice
I Love Practice

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     int i, n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("I Love Practice\n");
    }
    
    return 0;
}
