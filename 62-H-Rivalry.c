/* 
H - Rivalry 

Dominater and Everule are very competitive, and keep trying to show that they are better at competitive programming than the other. What better measure is there than their rating?

Both of them participated in a contest. Before the contest, Dominater’s rating was 
R
1
R 
1
​
  and Everule’s rating was 
R
2
R 
2
​
 . Dominater’s rating changed by 
D
1
D 
1
​
  in the contest, and Everule’s rating changed by 
D
2
D 
2
​
 .

Who has the higher final rating after the contest?
Print “Dominater” if his rating is higher, and “Everule” if his rating is higher (without the quotes).
It is guaranteed they do not have equal ratings at the end of the contest.

Input Format
The first line of input will contain two space-separated integers 
R
1
R 
1
​
  and 
R
2
R 
2
​
 , denoting the initial ratings of Dominater and Everule.
The second line of input will contain two space-separated integers 
D
1
D 
1
​
  and 
D
2
D 
2
​
 , denoting the rating changes of Dominater and Everule.
Output Format
Output Dominater or Everule, depending on who has a higher rating at the end.

Each character of the output may be printed in either uppercase or lowercase, i.e, Everule, EVERULE, and evERuLe will all be treated as equivalent.

Constraints
1
≤
R
1
,
R
2
≤
3000
1≤R 
1
​
 ,R 
2
​
 ≤3000
−
200
≤
D
1
,
D
2
≤
200
−200≤D 
1
​
 ,D 
2
​
 ≤200
It is guaranteed Dominater and Everule have different final ratings.
Sample 1
Inputcopy	Outputcopy
1 100
-5 -150
Dominater
Dominater's final rating after the contest is 
1
−
5
=
−
4
1−5=−4. Everule's final rating is 
−
50
−50. Hence, Dominater has a greater final rating.
Sample 2

Inputcopy	Outputcopy
2636 2536
-116 -11
Everule

Dominater's final rating is 
2520
2520. Everule's final rating is 
2525
2525. Hence, Everule has a higher final rating.
*/

#include <stdio.h>
int main(){
    int R1,R2,D1,D2;
    scanf("%d %d", &R1,&R2);
    scanf("%d %d", &D1,&D2);

    int DominaterFinal = R1 + D1;
    int EveruleFinal = R2 + D2;

    if(DominaterFinal > EveruleFinal){
        printf("Dominater\n");
    }else{
        printf("Everule\n");
    }

    return 0;
}