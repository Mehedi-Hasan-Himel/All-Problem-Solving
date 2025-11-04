/* 
Problem Statement

You've learned about variables, right? Now its time to practice them. You need to take an integer A, a very big integer B, a floating value C and a character D as input and output them serially.

Input Format

First line will contain A
Second line will contain B
Third line will contain C
Fourth line will contain D
Constraints

-10^9 <= A <= 10^9
-10^18 <= B <= 10^18
-10^9 <= C <= 10^9
Output Format

Output them serially and put a new line after each value. Output the floating value 2 points after decimal.
Sample Input 0

100
1234567891234567
23.5675
A
Sample Output 0

100
1234567891234567
23.57
A
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int A;
    long long int B;
    double C;
    char D;
    scanf("%d\n", &A);
    scanf("%lld", &B);
    scanf("%lf\n",&C);
    scanf("%c\n", &D);
    
    printf("%d\n", A);
    printf("%lld\n",B);
    printf("%.2lf\n", C);
    printf("%c\n",D);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
