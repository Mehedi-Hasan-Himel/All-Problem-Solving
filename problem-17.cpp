/*
Q - Sweets Shop

Sushil went to a sweet shop because he always craves to eat sweets. This is not good for his health as he has diabetes, but he doesn’t care. A laddu costs Rs.
10
10 while a jalebi costs Rs.
20
20.

Initially, Sushil had Rs.
X
X but then Sushil bought
N
N laddus, how many jalebis can he buy with the remaining money?

Input Format
The first line of input contains
X
X and
N
N - the initial amount of money Sushil had and the number of laddus he bought already.
Output Format
For each test case, output on a new line the the number of jalebis he can buy.

Constraints
1
≤
X
≤
100
1≤X≤100
1
≤
N
≤
10
1≤N≤10
10
⋅
N
≤
X
10⋅N≤X
Sample 1
Inputcopy	Outputcopy
99 3
3
Sushil had Rs.
99
99 but after spending on buying
3
3 laddus, he only has Rs.
69
69 left, which is enough to buy only
3
3 jalebis.
Sample 2
Inputcopy	Outputcopy
100 10
0
Sushil had Rs.
100
100 but he spent all of it on buying laddus. So, he can buy
0
0 jalebis.
*/

#include <stdio.h>

int main()
{
    int Each_Laddu_Price = 10;
    int Each_Jalebi_Price = 20;

    int Total_Money, Total_Laddu;
    scanf("%d %d", &Total_Money, &Total_Laddu);
    int Total_Laddu_Price = Each_Laddu_Price * Total_Laddu;
    int Total_Jalebi_Price = Total_Money - Total_Laddu_Price;

    int Total_Jalebi = Total_Jalebi_Price / Each_Jalebi_Price;

    printf("%d\n", Total_Jalebi);

    return 0;
}