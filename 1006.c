#include<stdio.h>

int main()
{
    double a, b, c, med;
    scanf("%lf %lf %lf", &a, &b, &c);
    a *= 2;
    b *= 3;
    c *= 5;
    printf("MEDIA = %.1lf\n",(a+b+c)/(2+3+5));

    return 0;
}
