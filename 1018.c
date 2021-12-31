#include<stdio.h>

int main()
{

    int n, rem, hn_n, fi_n, tw_n, tn_n, f_n, two, one;

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    scanf("%d", &n);

    hn_n = n / 100;
    rem = n % 100;

    fi_n = rem / 50;
    rem = rem % 50;

    tw_n = rem / 20;
    rem = rem % 20;

    tn_n = rem / 10;
    rem = rem % 10;

    f_n = rem / 5;
    rem = rem % 5;

    two = rem / 2;
    rem = rem % 2;

    one = rem / 1;
    rem = rem % 1;

    printf("%d\n", n);
    printf("%d nota(s) de R$ 100,00\n", hn_n);
    printf("%d nota(s) de R$ 50,00\n", fi_n);
    printf("%d nota(s) de R$ 20,00\n", tw_n);
    printf("%d nota(s) de R$ 10,00\n", tn_n);
    printf("%d nota(s) de R$ 5,00\n", f_n);
    printf("%d nota(s) de R$ 2,00\n", two);
    printf("%d nota(s) de R$ 1,00\n", one);

    return 0;
}
