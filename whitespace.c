#include <stdio.h>
int main (void)
{
    float a, b;
    
    printf ("how much of a bonus did you get? ");
    scanf (" %f", &a);
    b = .85  * a;
    printf ("have %.2f.", b);
    return 0;
}