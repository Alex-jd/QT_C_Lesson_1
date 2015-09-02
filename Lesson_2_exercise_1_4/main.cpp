#include <iostream>
#include <stdio.h>
#include <math.h>
#define PI 3.1415926535

using namespace std;

int main()
{
    float d, L_okr, S_okr;
    printf ("Введине диаметр окружности ");
    scanf ("%f", &d);
    S_okr = (PI/4.0)*pow(d,2.0);
    L_okr = PI * d;
    printf ("Площадь окружности равна %5.2f\n", S_okr);
    printf ("Длина окружности равна %5.2f\n", L_okr);
    return 0;
}

