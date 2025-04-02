#include <stdio.h>
#define pi 3.14159
int main()
{
    // declaration of variable
    double R, A;
    scanf("%lf", &R);
    // calculate the area of circle
    A = pi * R * R;
    // print the result
    printf("A=%.4lf\n", A);

    return 0;
}
