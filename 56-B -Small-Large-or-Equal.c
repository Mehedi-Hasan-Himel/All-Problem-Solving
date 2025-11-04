/* 
B - Small, Large, or Equal

Write a program which prints small/large/equal relation of given two integers a and b.

Input
Two integers a and b separated by a single space are given in a line.

Output
For given two integers a and b, print

a < b
if a is less than b,

a > b
if a is greater than b, and

a == b
if a equals to b.

Constraints
-1000 ≤ a, b ≤ 1000
Inputcopy	Outputcopy
1 2
a < b
Inputcopy	Outputcopy
4 3
a > b
Inputcopy	Outputcopy
5 5
a == b

*/

#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    if(a < b ){
        printf("a < b");
    }else if(a > b){
        printf("a > b");
    }else if(a == b){
        printf("a == b");
    }

    return 0;
}