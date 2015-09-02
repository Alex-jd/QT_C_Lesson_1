#include <stdio.h>
#include <math.h>
#define PI 3.14159265
using namespace std;

int main()
{
    float a, b, c, alfa, beta;
    printf ("Введите катет А = ");
    scanf ( "%f", &a);
    printf ("Введите катет В = ");
    scanf ("%f", &b);
    c = pow(pow(a,2) + pow(b,2),1./2); //важный момент связанный с возведением в степень 1/2. Необходимо степень числа представлять в виде вещественного числа
    // либо как pow(x,(fload)1/2), либо как pow(x,1./2)
//    printf ("a/c = %5.2f\n", a/c);
    alfa = asin(a/c)*(180./PI);// По умолчанию тригонометрические функции с языке С++ выдают результат в радианах
    beta = asin(b/c)*(180./PI);// Поэтому не обходимо радианы перевести в градусы, то есть полученное значение умножить на 180./PI (обращаем внимание, что числитель
    //описан в виде вещественного числа
    printf ("Гипотенуза = %5.2f\n", c);
    printf ("Угол альфа = %5.5f\t бета = %5.2f\n", alfa, beta);
    return 0;
}
