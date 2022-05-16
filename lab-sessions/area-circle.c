/*
    Authored by Sohan Shashikumar
    CSE student @ DSCE
*/

#include <stdio.h>
// Used to define a constant
#define PI 3.14

int main()
{
    float r;
    printf("Enter the radius of the circle:\n");
    scanf("%f", &r);

    /*
    Note the use of `%.2f` in this case
    This means that I want only two numbers after the decimal point while printing
    */
    printf("Area of the circle with radius: %.2f is: %.2f", r, PI * r * r);
    return 0;
}

/*
--------------------------
----------OUTPUT----------
--------------------------

Enter the radius of the circle:
3.654
Area of the circle with radius: 3.65 is: 41.92

*/
