#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float a,c,S,P;
    printf ("diagonal = ");
    scanf ("%f", &c);
    a = c * sin(45.0);
    S = pow(a,2.0);
    P = 4 * a;
    printf ("S = %5.2f\t", S);
    printf ("P = %5.2f\t", P);
    return 0;
}

