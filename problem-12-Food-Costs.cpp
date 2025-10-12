/*
L - Food Costs

You’re a bit all over the place as a college student. You used to eat out at expensive restaurants almost every day until your parents gave you a talking-to about being irresponsible. Now, you’ve got to control your eating and spending habits.

So, here’s the plan: you’ll stick to the college mess for your meals every day, except Sundays. On Sundays, you’re treating yourself to those fancy restaurant meals.
The cost is Rs.
X
X for the mess food each day, and Rs.
Y
Y for the restaurant splurges.

Now, what’s the cost of food per week? Note that you don’t have to pay for the mess on Sundays.
A week has seven days, as usual.

Input Format
The first and only line of input contains
2
2 space-separated integers,
X
X and
Y
Y.
Output Format
Output a single integer: the weekly cost of food.

Constraints
1
≤
X
<
Y
≤
1000
1≤X<Y≤1000
Sample 1
Inputcopy	Outputcopy
100 500
1100
On Monday, Tuesday, Wednesday, Thursday, Friday and Saturday, your food cost is
100
100.
On Sunday, your food cost is
500
500.

Thus your total food cost is
100
+
100
+
100
+
100
+
100
+
100
+
500
=
1100
100+100+100+100+100+100+500=1100
*/

#include <stdio.h>
int main()
{
    int College_Mess, Restaurant_Splurges;
    scanf("%d %d", &College_Mess, &Restaurant_Splurges);

    int College_Mess_6days = College_Mess * 6;
    int Restaurant_Splurges_Sunday = Restaurant_Splurges;

    int WeeklyCost = College_Mess_6days + Restaurant_Splurges_Sunday;

    printf("%d\n", WeeklyCost);

    return 0;
}