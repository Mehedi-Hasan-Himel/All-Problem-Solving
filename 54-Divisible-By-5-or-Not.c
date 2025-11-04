/* 
Divisible By 5 or Not

Problem Statement

You will be given a positive integer N, you need to print from 1 to N and besides the value, print Yes or No. Print Yes if the value is divisible by 5 and print No otherwise.

Input Format

Input will contain a positive integer N.
Constraints

1 <= N <= 1000
Output Format

Output as mentioned in the question. See the sample input output for more clarifications. Put a new line after every line.
Sample Input 0

10
Sample Output 0

1 No
2 No
3 No
4 No
5 Yes
6 No
7 No
8 No
9 No
10 Yes
Sample Input 1

5
Sample Output 1

1 No
2 No
3 No
4 No
5 Yes
*/

#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        if(i%5==0){
            printf("%d Yes\n", i);
        }else{
            printf("%d No\n", i);

        }
    }


    return 0;
}