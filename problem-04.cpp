/* 
D - Clear Day

Chef classifies a day to be either rainy, cloudy, or clear.

In a particular week, Chef finds 
X
X days to be rainy and 
Y
Y days to be cloudy.
Find the number of clear days in the week.

Input Format
The first and only line of input will contain two space-separated integers 
X
X and 
Y
Y, denoting the number of rainy and cloudy days in the week.
Output Format
Output the number of clear days in the week.

Constraints
0
≤
X
,
Y
≤
7
0≤X,Y≤7
0
≤
X
+
Y
≤
7
0≤X+Y≤7
Sample 1
Inputcopy	Outputcopy
2 3
2
There are 
7
7 days in a week. If there are 
2
2 rainy days and 
3
3 cloudy days, then the remaining 
7
−
2
−
3
=
2
7−2−3=2 days are clear.
Sample 2
Inputcopy	Outputcopy
3 4
0
If there are 
3
3 rainy days and 
4
4 cloudy days, then the remaining 
7
−
3
−
4
=
0
7−3−4=0 days are clear.

*/



#include <stdio.h>

int main(){
    int rainy, cloudy;

    scanf("%d %d", &rainy, &cloudy);
    int rainy_cloudy_days = rainy + cloudy ;
    int clear_days = 7 - rainy_cloudy_days;

    printf("%d", clear_days);

    return 0;
}