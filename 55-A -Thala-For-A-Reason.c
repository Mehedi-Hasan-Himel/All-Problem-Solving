/* 

You are given an integer 
N
N.

Print THALA if 
N
=
7
N=7, otherwise print SADGE.

Input Format
The only line of input contains an integer 
N
N.
Output Format
Output a single string, print THALA if 
N
=
7
N=7, otherwise print SADGE.

You may print each character of the string in uppercase or lowercase (for example, the strings THALA, thALa, thala, and tHalA will all be treated as identical).

Constraints
1
≤
N
≤
10
1≤N≤10
Sample 1
Inputcopy	Outputcopy
7
THALA
Since 
N
=
7
N=7, output is `THALA`.
Sample 2
Inputcopy	Outputcopy
1
SADGE
Since 
N
≠
7
N

=7, output is `SADGE`.

*/
#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    if(N == 7){
        printf("THALA\n");
    }else{
        printf("SADGE\n");
    }

    return 0;
}