#include <stdio.h>
#include <math.h>
#define PI 3.14159265

using namespace std;

int main()
{
    float a, b, c, alfa, beta, s;
    printf ("Введите длину гипотенузы ");
    scanf ("%f", &c);
    printf ("Введите угол альфа ");
    scanf ("%f", &alfa);
    alfa = alfa/(180./PI);
    a = cos(alfa)*c;
    printf ("a = %5.2f", a);
    b = sin(alfa)*c;
    s = (a + b)/2;
    beta = acos(b/c)*(180./PI);
    printf ("Площадь равна = %5.5f \n Угол beta = %5.5f \n", s, beta);
    return 0;
}

