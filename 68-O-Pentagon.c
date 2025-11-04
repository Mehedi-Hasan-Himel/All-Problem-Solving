/*
P - Messi vs Ronaldo

In Chefland, a football player gets
2
2 points for each goal and
1
1 point for each assist.

Messi has
A
A goals and
B
B assists this season, whereas Ronaldo has
X
X goals and
Y
Y assists.
Find out the player with more points this season.

Input Format
The first and only line of input will contains four space-separated integers
A
A,
B
B,
X
X and
Y
Y, the number of goals and assists that Messi has and the number of goals and assists that Ronaldo has, respectively.
Output Format
Print a single line containing:

Messi, if Messi has more points than Ronaldo.
Ronaldo, if Ronaldo has more points than Messi.
Equal, if both have equal points.
You can print each character in uppercase or lowercase. For example, the strings Messi, MESSI, messi, and MeSSi are considered identical.

Constraints
0
≤
A
,
B
,
X
,
Y
≤
100
0≤A,B,X,Y≤100
Sample 1
Inputcopy	Outputcopy
40 30 50 10
Equal
- Messi has
40
40 goals and
30
30 assists. Thus, his total points are
40
⋅
2
+
30
=
110
40⋅2+30=110. - Ronaldo has
50
50 goals and
10
10 assists. Thus, his total points are
50
⋅
2
+
10
=
110
50⋅2+10=110.
Both have
110
110 points.

Sample 2
Inputcopy	Outputcopy
91 22 60 30
Messi
- Messi has
91
91 goals and
22
22 assists. Thus, his total points are
91
⋅
2
+
22
=
204
91⋅2+22=204. - Ronaldo has
60
60 goals and
30
30 assists. Thus, his total points are
60
⋅
2
+
30
=
150
60⋅2+30=150.
Messi has
204
204 points, whereas Ronaldo has
150
150.

Sample 3
Inputcopy	Outputcopy
60 30 80 20
Ronaldo
- Messi has
60
60 goals and
30
30 assists. Thus, his total points are
60
⋅
2
+
30
=
150
60⋅2+30=150. - Ronaldo has
80
80 goals and
20
20 assists. Thus, his total points are
80
⋅
2
+
20
=
180
80⋅2+20=180.
Messi has
150
150 points, whereas Ronaldo has
180
180.

*/

#include <stdio.h>
int main()
{
    int A, B, X, Y;
    scanf("%d %d %d %d", &A, &B, &X, &Y);

    int Messi = (A * 2) + B;
    int Ronaldo = (X * 2) + Y;

    if (Messi > Ronaldo)
    {
        printf("Messi\n");
    }
    else if (Ronaldo > Messi)
    {
        printf("Ronaldo\n");
    }
    else if (Messi == Ronaldo)
    {
        printf("Equal\n");
    }

    return 0;
}