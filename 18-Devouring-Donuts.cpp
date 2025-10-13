/*
R - Devouring Donuts
Chef baked a full tray of donuts, but couldn’t resist and ate them all!

The tray had
X
X donuts, and each donut contains
Y
Y calories.
How many calories did Chef consume in total?

Input Format
The only line of input contains two space-separated integers
X
X and
Y
Y - the number of donuts and the calorie count of each one.

Output Format
Print a single integer: the total number of calories consumed by Chef.

Constraints
1
≤
X
≤
10
1≤X≤10
200
≤
Y
≤
300
200≤Y≤300
Sample 1
Inputcopy	Outputcopy
2 280
560
Chef ate two donuts, each containing
280
280 calories. The total number of calories is thus
280
+
280
=
560
280+280=560.
Sample 2
Inputcopy	Outputcopy
6 237
1422
Chef ate six donuts, each containing
237
237 calories. The total number of calories is thus
6
⋅
237
=
1422
6⋅237=1422
*/

#include <stdio.h>
int main()
{
    int Total_Donuts, Each_Donuts_Calories;
    scanf("%d %d", &Total_Donuts, &Each_Donuts_Calories);
    int Total_Donuts_Calories = Total_Donuts * Each_Donuts_Calories;
    printf("%d\n", Total_Donuts_Calories);

    return 0;
}