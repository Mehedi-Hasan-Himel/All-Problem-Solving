/* 

C - Double Rent

Chefina decided to move into Chef’s apartment.
Chef was initially paying a rent of 
X
X rupees. Since Chefina is moving in, the owner decided to double the rent.

Find the final rent Chef needs to pay.

Input Format
The input consists of a single integer 
X
X, denoting the rent Chef was initially paying.

Output Format
Output on a new line, the final rent Chef needs to pay.

Constraints
1
≤
X
≤
10
1≤X≤10
Sample 1
Inputcopy	Outputcopy
2
4
Chef was initially paying 
2
2 rupees. After Chefina moves in, he needs to pay 
2
⋅
2
=
4
2⋅2=4 rupees.
Sample 2
Inputcopy	Outputcopy
3
6
Chef was initially paying 
3
3 rupees. After Chefina moves in, he needs to pay 
2
⋅
3
=
6
2⋅3=6 rupees.
Sample 3
Inputcopy	Outputcopy
10
20
Chef was initially paying 
10
10 rupees. After Chefina moves in, he needs to pay 
2
⋅
10
=
20
2⋅10=20 rupees.

*/


#include <stdio.h>

int main(){

    int Chef;

    scanf("%d", &Chef);

    int Rent_After_Chefina_Moves = Chef * 2;

    printf("%d", Rent_After_Chefina_Moves);

    return 0;
}