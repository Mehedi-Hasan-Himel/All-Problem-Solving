/* 
F - Water Park 

Chef decides to go to the water park to play. To enter the water slide, a person must have a weight of at most 
W
W Kg and a height of at least 
H
H cm.

Chef weighs 
60
60 Kg and his height is 
130
130 cm.

Is Chef allowed to enter the water slide?

Input Format
The first and only line of input will contain two space-separated integers 
W
W and 
H
H.
Output Format
Output YES if Chef can enter the waterslide and NO if he cannot.
You may print each character of the string in either uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).
Constraints
1
≤
W
,
H
≤
1000
1≤W,H≤1000

Sample 1
Inputcopy	Outputcopy
75 110
YES
Chef is allowed on the water slide, because: - His height is 
130
130 cm, which is 
≥
110
≥110. - His weight is 
60
60 kg, which is 
≤
75
≤75.
Sample 2
Inputcopy	Outputcopy
55 115
NO
Chef's height is 
≥
115
≥115 cm, but his weight is greater than 
55
55 kg. So, Chef is **NOT** allowed on the water slide.
Sample 3
Inputcopy	Outputcopy
60 130
YES
*/

#include <stdio.h>
int main(){
    int W, H;
    scanf("%d %d", &W, &H);
    if(60 <= W && 130 >= H){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}