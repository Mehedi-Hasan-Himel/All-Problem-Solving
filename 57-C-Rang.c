/* 
C - Range

Write a program which reads three integers a, b and c, and prints "Yes" if a < b < c, otherwise "No".

Input
Three integers a, b and c separated by a single space are given in a line.

Output
Print "Yes" or "No" in a line.

Constraints
0 ≤ a, b, c ≤ 100
Inputcopy	Outputcopy
1 3 8
Yes
Inputcopy	Outputcopy
3 8 1
No
*/

#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a < b && b < c){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}


