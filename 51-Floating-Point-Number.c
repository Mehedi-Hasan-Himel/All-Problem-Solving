/* 
Floating Point Number
Time Limit: 1 Seconds

Memory Limit: 2.93 MB

Statement
In this problem you will be given a floating point number x. You have to print x upto 3 decimal points.

Constraints
1.0 <= x <= 100.0

Input format
Input will contain a floating point number x.

Output Format
 Print the number x upto 3 decimal points.

Sample Input 1
22.12344
Sample Output 1
22.123
*/

#include <stdio.h>
int main(){
    double x;
    scanf("%lf", &x);
    printf("%.3lf",x);

    return 0;
}