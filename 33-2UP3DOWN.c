/* 
A - 2UP3DOWN  / 
Time Limit: 2 sec / Memory Limit: 1024 MiB

Score : 
100 points

Problem Statement
Takahashi is in a building with 
100 floors.

He uses the stairs for moving up two floors or less or moving down three floors or less, and uses the elevator otherwise.

Does he use the stairs to move from floor 
X to floor 
Y?

Constraints
1≤X,Y≤100
X

=Y
All input values are integers.
Input
The input is given from Standard Input in the following format:

X 
Y
Output
If Takahashi uses the stairs for the move, print Yes; if he uses the elevator, print No.

Sample Input 1
Copy
1 4
Sample Output 1
Copy
No
The move from floor 
1 to floor 
4 involves going up three floors, so Takahashi uses the elevator.

Sample Input 2
Copy
99 96
Sample Output 2
Copy
Yes
The move from floor 
99 to floor 
96 involves going down three floors, so Takahashi uses the stairs.

Sample Input 3
Copy
100 1
Sample Output 3
Copy
No
*/


#include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if((x-3)<= y && y <=(x+2)){
        printf("Yes\n");
    }else{
        printf("No");
    }

    return 0;
}