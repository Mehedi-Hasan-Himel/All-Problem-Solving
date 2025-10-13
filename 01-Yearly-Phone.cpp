/*
A - Yearly Phone
Chef is interested by buying a new phone, and is in the process of researching what’s available on the market.

His favorite brand, Kitchen Telecom, just released their latest model.
Kitchen Telecom releases a new phone every year, and so names its phones based upon the year of release: the name of the phone model launched in year 
X
X is 
K
K (the letter) followed by the last two digits of 
X
X.
For instance, the phone model launched in the year 
2024
2024 is named 
K24
K24.

The current year is 
X
X. What’s the latest phone model launched by Kitchen Telecom?

Input Format
The first and only line of input contains a single integer 
X
X, the current year.
Output Format
Print the name of Kitchen Telecom’s phone launched in year 
X
X.

Constraints
1973
≤
X
≤
2024
1973≤X≤2024
Sample 1
Inputcopy	Outputcopy
2000
K00
Sample 2
Inputcopy	Outputcopy
2024
K24
**Sample 
1
1:** The last two digits of 
2000
2000 are 
00
00, so the answer is `K00`. Note that any zeros are printed as-is, and are not ignored.
Sample 
2
2: The last two digits of 
2024
2024 are 
24
24, so the answer is K24.

*/


#include <stdio.h>

int main(){
    int year;
    scanf("%d", &year);
    int last_two_digits = year % 100 ;

    printf("K%02d\n", last_two_digits);

    return 0;
}