/* 
Q - Oneful Pairs 

Chef defines a pair of positive integers 
(
a
,
b
)
(a,b) to be a 
Oneful Pair
Oneful Pair, if

a
+
b
+
(
a
⋅
b
)
=
111
a+b+(a⋅b)=111

For example, 
(
1
,
55
)
(1,55) is a 
Oneful Pair
Oneful Pair, since 
1
+
55
+
(
1
⋅
55
)
=
56
+
55
=
111
1+55+(1⋅55)=56+55=111.
But 
(
1
,
56
)
(1,56) is not a 
Oneful Pair
Oneful Pair, since 
1
+
56
+
(
1
⋅
56
)
=
57
+
56
=
113
≠
111
1+56+(1⋅56)=57+56=113

=111.

Given two positive integers 
a
a and 
b
b, output Yes if they are a 
Oneful Pair
Oneful Pair. And No otherwise.

Input Format
The only line of input contains two space-separated integers 
a
a and 
b
b.

Output Format
Output Yes, if 
(
a
,
b
)
(a,b) form a 
Oneful Pair
Oneful Pair. Output No if they do not.

You may print each character of Yes and No in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

Constraints
1
≤
a
,
b
≤
1000
1≤a,b≤1000
Sample 1
Inputcopy	Outputcopy
1 55
Yes
(
1
,
55
)
(1,55) is a 
Oneful Pair
Oneful Pair, since 
1
+
55
+
(
1
⋅
55
)
=
56
+
55
=
111
1+55+(1⋅55)=56+55=111.
Sample 2
Inputcopy	Outputcopy
1 56
No
(
1
,
56
)
(1,56) is not a 
Oneful Pair
Oneful Pair, since 
1
+
56
+
(
1
⋅
56
)
=
57
+
56
=
113
≠
111
1+56+(1⋅56)=57+56=113

=111
*/

#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    if((a+b) + (a*b) == 111){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}