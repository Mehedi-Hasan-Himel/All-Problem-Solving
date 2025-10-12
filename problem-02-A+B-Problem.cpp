/* 

B - A+B Problem

Calculate a + b
Input
a and b
Output
a+b
Sample
Inputcopy	Outputcopy
1 5
6
Notes
Use + operator
*/

#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    int Summation = a+b;
    printf("%d", Summation);

    return 0;
}