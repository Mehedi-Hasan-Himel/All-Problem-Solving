/* 
L - Sports Section

The newspaper in Chefland consists of 
10
10 pages numbered 
1
1 to 
10
10.
The last 
3
3 pages of the newspaper are always dedicated to the sports section.

Given a random page number 
X
X, determine whether that page is dedicated to the sports section.

Input Format
The first and only line of input consists of a single integer 
X
X, denoting the page number.
Output Format
Output on a new line, YES, if the given page number is dedicated to the sports section, and NO otherwise.

You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

Constraints
1
≤
X
≤
10
1≤X≤10
Sample 1
Inputcopy	Outputcopy
3
NO
Page number 
3
3 is not dedicated to the sports section.
Sample 2
Inputcopy	Outputcopy
8
YES
Since page number 
8
8 is one of the last three pages, it is dedicated to the sports section.
Sample 3
Inputcopy	Outputcopy
10
YES
Since page number 
10
10 is one of the last three pages, it is dedicated to the sports section.
*/

#include <stdio.h>
int main(){
    int X;
    scanf("%d", &X);
    if(X>=8 && X <= 10){
        printf("YES");
    }else{
         printf("NO");
    }


    return 0;
}