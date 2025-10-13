/* 
H - Attack

Problem Statement
There is an enemy with stamina 
A
A. Every time you attack the enemy, its stamina reduces by 
B
B.

At least how many times do you need to attack the enemy to make its stamina 
0
0 or less?

Constraints
1
≤
A
,
B
≤
10
18
1≤A,B≤10 
18
 
A
A and 
B
B are integers.
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
7 3
3
Attacking three times make the enemy's stamina 
−
2
−2.

Attacking only twice makes the stamina 
1
1, so you need to attack it three times.

Sample 2
Inputcopy	Outputcopy
123456789123456789 987654321
124999999
Sample 3
Inputcopy	Outputcopy
999999999999999998 2
499999999999999999
*/

#include <stdio.h>

int main() {
    long long A, B;
    scanf("%lld %lld", &A, &B);

    long long attacks = (A + B - 1) / B;

    printf("%lld\n", attacks);

    return 0;
}
