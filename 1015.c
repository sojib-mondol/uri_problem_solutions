#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, a2, b2, max;
    scanf("%lf %lf %lf %lf", &a, &b, &a2, &b2);
    max = sqrt(pow((a2 - a), 2) + pow((b2 - b), 2));
    printf("%.4lf\n", max);

    return 0;

}
