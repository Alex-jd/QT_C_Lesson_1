#include <iostream>
#include <stdio.h>
#include <math.h>


using namespace std;

int main()
{
    float a, b, c, srd_arif, srd_geom;
    printf ("Введите 3 числа\n");
    scanf ("%f %f %f", &a, &b, &c);
    srd_arif = (a + b + c)/3;
    srd_geom = pow ((a * b *c),1.0/3);
    printf ("Среднее арифметическое равно %5.5f\n", srd_arif);
    printf ("Среднее геометрическое равно %5.5f\n", srd_geom);
    return 0;
}

