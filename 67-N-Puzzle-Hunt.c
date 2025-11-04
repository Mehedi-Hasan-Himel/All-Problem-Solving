/*
N - Puzzle Hunt

Chef and some of his friends are planning to participate in a puzzle hunt event.

The rules of the puzzle hunt state:
“This hunt is intended for teams of
6
6 to
8
8 people.”

Chef’s team has
N
N people in total. Are they eligible to participate?

Input Format
The first and only line of input will contain a single integer
N
N: the number of people present in Chef’s team.

Output Format
Print the answer: Yes if Chef’s team is eligible to participate, and No otherwise.

Each letter in the output may be printed in either uppercase or lowercase, i.e, the outputs NO, No, nO, no will all be treated as equivalent.

Constraints
1
≤
N
≤
10
1≤N≤10
Sample 1
Inputcopy	Outputcopy
4
No
The puzzle hunt requires between
6
6 and
8
8 people in a team.
4
4 isn't between
6
6 and
8
8, so Chef's team cannot participate.
Sample 2
Inputcopy	Outputcopy
7
Yes
Chef's team has
7
7 people, and
7
7 lies between
6
6 and
8
8. So, Chef's team can participate in the event.
Sample 3
Inputcopy	Outputcopy
8
Yes
Chef's team has
8
8 people, and
8
8 lies between
6
6 and
8
8. So, Chef's team can participate in the event.
*/

#include <stdio.h>
int main()
{
    int X;
    scanf("%d", &X);

    if (X >= 6 && X <= 8)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}