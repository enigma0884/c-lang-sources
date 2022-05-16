/*
    Authored by Sohan Shashikumar
    CSE student @ DSCE
*/

#include <stdio.h>

int main()
{
    int l, b;
    printf("Enter the length:\n");
    scanf("%d", &l);

    printf("Enter the breadth:\n");
    scanf("%d", &b);

    printf("Area of rectangle with length: %d and breadth: %d is: %d", l, b, l * b);

    return 0;
}

/*
--------------------------
----------OUTPUT----------
--------------------------

Enter the length:
2
Enter the breadth:
3
Area of rectangle with length: 2 and breadth: 3 is: 6

*/
