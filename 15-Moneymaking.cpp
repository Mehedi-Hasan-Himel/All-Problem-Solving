/*
O - Moneymaking

Chef has
X
X nuggets and
Y
Y star pieces with him.

Each nugget sells for
5000
5000 coins, and each star piece sells for
9800
9800 coins.

How much money can Chef make by selling all of his items?

Input Format
The only line of input will contain two space-separated integers
X
X and
Y
Y — the number of nuggets and star pieces Chef has.
Output Format
Output a single integer: the amount of money Chef can earn by selling all his items.

Constraints
0
≤
X
,
Y
≤
10
0≤X,Y≤10
Sample 1
Inputcopy	Outputcopy
2 3
39400
There are two nuggets and three star pieces, so Chef will obtain
2
×
5000
+
3
×
9800
=
10000
+
29400
=
39400
2×5000+3×9800=10000+29400=39400 from selling them all.
Sample 2
Inputcopy	Outputcopy
4 0
20000
There are four nuggets and no star pieces, Chef will obtain
4
×
5000
=
20000
4×5000=20000 from selling them all.
*/

#include <stdio.h>
int main()
{
    int Each_Nugget_Price = 5000;
    int Each_Star_Piece_Price = 9800;

    int Total_Nugget, Total_Star_Piece;
    scanf("%d %d", &Total_Nugget, &Total_Star_Piece);

    int Total_Nugget_Price = Total_Nugget * Each_Nugget_Price;
    int Total_Star_Piece_Price = Total_Star_Piece * Each_Star_Piece_Price;

    int Total_Chef_Money = Total_Nugget_Price + Total_Star_Piece_Price;

    printf("%d\n", Total_Chef_Money);

    return 0;
}
