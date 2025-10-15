/*
N - CodeChef Learn Problem Solving

In the new CodeChef Learn module, under the “Learn Problem Solving” section, there are two courses for each language. For eg. “Python Beginner - Part 1” and “Python Beginner - Part 2”. These courses help you get started with CodeChef contests.

Currently there are courses for 4 languages, and hence there are 8 courses in this section. But suppose there are courses for
N
N languages, what will be the total number of courses in this section?

Input Format
The only line of input will contain a single integer
N
N, denoting the number of languages for which there are courses.

Output Format
Output on a single line the total number of courses in the section.

Constraints
1
≤
N
≤
100
1≤N≤100
Sample 1
Inputcopy	Outputcopy
4
8
If there are
4
4 languages, then there will be
2
∗
4
=
8
2∗4=8 courses in total.
Sample 2
Inputcopy	Outputcopy
9
18
If there are
9
9 languages, then there will be
2
∗
9
=
18
2∗9=18 courses in total.
*/

#include <stdio.h>

int main()
{
    int Total_Language = 4;
    int Total_Courses = 8;
    int Courses_For_Each_Language = Total_Courses / Total_Language;
    int N_Language;

    scanf("%d", &N_Language);

    int Course_For_N_Language = N_Language * Courses_For_Each_Language;

    printf("%d", Course_For_N_Language);

    return 0;
}

