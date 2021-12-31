#include<stdio.h>
int main()
{
    char em_n;
    double s_s, s_v;

    scanf("%s", &em_n);
    scanf("%lf %lf",&s_s, &s_v);
    printf("TOTAL = R$ %.2lf\n", s_s+((s_v*15)/100));

    return 0;
}
