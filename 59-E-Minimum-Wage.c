/* 
The minimum wage in Chefland is 
11
11 dollars per hour.

Given that Chef earns 
X
X dollars per hour, find whether his income is strictly above the minimum wage.

Input Format
The first and only line contains an integer 
X
X, denoting the income of Chef per hour.
Output Format
Output on a new line, YES, if Chef’s income is strictly above the minimum wage. Otherwise, output NO.

You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

Constraints
1
≤
X
≤
20
1≤X≤20
Sample 1
Inputcopy	Outputcopy
20
YES
Chef's income is 
20
20 dollars per hour, which is strictly higher than the minimum wage.
Sample 2
Inputcopy	Outputcopy
11
NO
Chef's income is 
11
11 dollars per hour, which is not higher than the minimum wage.
*/

#include <stdio.h>
int main(){
    int X;
    scanf("%d", &X);
    if(X > 11){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}