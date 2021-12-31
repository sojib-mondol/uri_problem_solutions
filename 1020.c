#include<stdio.h>

int main()
{
    int d, y, m, rem;
    scanf("%d", &d);

    y = d / 365;
    rem = d % 365;
    m = rem / 30;
    d = rem % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, m, d);
    return 0;
}
