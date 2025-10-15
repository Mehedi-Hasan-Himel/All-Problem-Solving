/*
P - Rectangle

Write a program which calculates the area and perimeter of a given rectangle.

Input
The length a and breadth b of the rectangle are given in a line separated by a single space.

Output
Print the area and perimeter of the rectangle in a line. The two integers should be separated by a single space.

Constraints
1 ≤ a, b ≤ 100
Inputcopy	Outputcopy
3 5
15 16
*/

#include <stdio.h>
int main()
{
    int length, breadth;
    scanf("%d %d", &length, &breadth);
    /*
    Formula:
    area = length * width;
    perimeter = 2 * (length + width);
    */

    int Area_Of_Rectangle = length * breadth;
    int Perimeter_Of_Rectangle = 2 * (length + breadth);

    printf("%d %d\n", Area_Of_Rectangle, Perimeter_Of_Rectangle);

    return 0;
}