/* 
Sorting Three Numbers
Time Limit : 1 sec, Memory Limit : 131072 KB
English / Japanese  
Sorting Three Numbers
Write a program which reads three integers, and prints them in ascending order.

Input
Three integers separated by a single space are given in a line.

Output
Print the given integers in ascending order in a line. Put a single space between two integers.

Constraints
1 ≤ the three integers ≤ 10000
Sample Input 1
3 8 1
Sample Output 1
1 3 8

*/

#include <stdio.h>

int main() {
    int a,b,c,temp;
    scanf("%d %d %d", &a, &b, &c);

    if(a>b){
        temp = a;
        a = b ;
        b = temp;
    }if(a>c){
        temp = a;
        a = c;
        c = temp;
    }if(b>c){
        temp =b;
        b=c;
        c = temp;
    }
    printf("%d %d %d", a,b,c);

return 0;
}