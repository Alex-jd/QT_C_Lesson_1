#include <iostream>
#include <stdio.h>
#include <math.h>
#define PI 3.14159265

using namespace std;

int main()
{
    float alfa,beta,a,b,c,S;
    printf ("c = ");
    scanf ("%f", &c);
    printf ("alfa = ");
    scanf ("%f", &alfa);
    a = c * sin(alfa);
    b = c * cos(alfa);
    S = (a * b)/2;
    beta = acos(a/c) * (180.0 / PI);
    printf ("a =%5.2f\t", a);
    printf ("S =%5.2f\t", S);
    printf ("beta =%5.2f\t", beta);
    return 0;
}

