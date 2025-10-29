/* 
October Marathon
Chef organised a 
30
30 kilometres marathon in Chefland.
The participants receive medals on completing the marathon as following:

If the total time taken is less than 
3
3 hours, they receive a GOLD medal.
If the total time taken is greater than equal to 
3
3 hours but less than 
6
6 hours, they receive a SILVER medal.
If the total time taken is greater than equal to 
6
6 hours, they receive a BRONZE medal.
chefinaTime participated in the marathon and completed it in 
X
X hours. Which medal would she receive?

Input Format
The input consists of a single integer 
X
X — the number of hours chefinaTime took to complete the marathon.
Output Format
Output the medal chefinaTime would recieve.

Note that you may print each character in uppercase or lowercase. For example, the strings GOLD, gold, Gold, and gOlD are considered the same.

Constraints
1
≤
X
≤
10
1≤X≤10.
Sample 1:
Input
Output
2
GOLD
Explanation:
chefinaTime completed the marathon in less than 
3
3 hours. Thus, she gets a GOLD medal.

Sample 2:
Input
Output
5
SILVER
Explanation:
chefinaTime took more than 
3
3 but less than 
6
6 hours. Thus, she gets a SILVER medal.

Sample 3:
Input
Output
6
BRONZE
Explanation:
chefinaTime took 
6
6 hours to complete the marathon. Thus, she gets a BRONZE medal.
*/

#include <stdio.h>
int main(){

    int chefinaTime;
    scanf("%d", &chefinaTime);

    if(chefinaTime < 3){
        printf("Gold\n");
    }else if(chefinaTime >= 3 && chefinaTime < 6){
        printf("Silver\n");
    }else if(chefinaTime >= 6){
        printf("Bronze\n");
    }

    return 0;
}