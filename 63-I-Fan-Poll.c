/* 
I - Fan Poll 

Chef Sports conducted a fan poll to find out who their fans thought was the best captain.
The three players nominated were Dhoni, Rohit, and Kohli. They received 
A
,
B
,
A,B, and 
C
C votes, respectively.

Find out whether Dhoni won the poll, i.e, if he received the maximum number of votes.

Note: It is guaranteed that no two players received the same number of votes.

Input Format
The only line of input contains three space-separated integers 
A
A, 
B
B, and 
C
C — the number of votes obtained by Dhoni, Rohit, and Kohli, respectively.

Output Format
Print the answer on a single line: "Yes" (without quotes) if Dhoni won the poll, and "No" (without quotes) otherwise.

Each character of the output may be printed in either uppercase or lowercase, i.e, the strings No, no, nO, and NO` will all be treated as equivalent.

Constraints
1
≤
A
≤
1000
1≤A≤1000
1
≤
B
≤
1000
1≤B≤1000
1
≤
C
≤
1000
1≤C≤1000
A
≠
B
A

=B, 
A
≠
C
A

=C, and 
B
≠
C
B

=C
Sample 1
Inputcopy	Outputcopy
50 23 28
Yes
Dhoni received 
50
50 votes, which is higher than the other two. This makes him the winner.
Sample 2
Inputcopy	Outputcopy
25 22 26
No
Dhoni received 
25
25 votes, but Kohli received 
26
26 which is larger - so, Dhoni didn't win.
*/

#include <stdio.h>
int main(){
    int Dhoni, Rohit, Kohli;
    scanf("%d %d %d", &Dhoni, &Rohit, &Kohli);
    if(Dhoni > Rohit && Dhoni > Kohli){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}