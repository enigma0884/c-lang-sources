/*
    Authored by Sohan Shashikumar
    CSE student @ DSCE
*/

#include <stdio.h>

int main()
{
    int a = 2;
    int b = 4;

    printf("Value of a is: %d and b is: %d before swapping\n", a, b);

    a = a + b; // 6
    b = a - b; // 2
    a = a - b; // 4

    printf("Value of a is: %d and b is: %d after swapping", a, b);

    return 0;
}

/*
--------------------------
----------OUTPUT----------
--------------------------

Value of a is: 2 and b is: 4 before swapping
Value of a is: 4 and b is: 2 after swapping

*/
