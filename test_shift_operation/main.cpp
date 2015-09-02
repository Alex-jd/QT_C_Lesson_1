#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    unsigned int a,b,temp;
    printf ("a = ");
    scanf ("%i", &a);
    printf ("b = ");
    scanf ("%i", &b);
    temp = a << b;
    printf ("temp = ", temp);
    return 0;
}

