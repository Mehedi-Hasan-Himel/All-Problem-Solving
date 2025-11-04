/* 
D - 404 Not Found

Chef’s website has a specific response mechanism based on the HTTP status code received:

If the response code is 
404
404, the website will return NOT FOUND.
For any other response code different from 
404
404, the website will return FOUND.
Given the response code as 
X
X, determine the website response.

Input Format
The first and only line of input contains a response code 
X
X.
Output Format
Output on a new line NOT FOUND, if the response code is 
404
404. Otherwise print FOUND.

You may print each character of the string in uppercase or lowercase (for example, the strings FOUND, fouND, FouND, and found will all be treated as identical).

Constraints
100
≤
X
≤
999
100≤X≤999
Sample 1
Inputcopy	Outputcopy
200
FOUND
Since the response code is not 
404
404, website returns `FOUND`.
Sample 2
Inputcopy	Outputcopy
404
NOT FOUND
Since the response code is 
404
404, website returns `NOT FOUND`.
Sample 3
Inputcopy	Outputcopy
301
FOUND
Since the response code is not 
404
404, website returns `FOUND`.

*/

#include <stdio.h>
int main(){
    int X;
    scanf("%d", &X);
    if(X == 404){
        printf("NOT FOUND\n");
    }else{
        printf("FOUND\n");
    }

    return 0;
}