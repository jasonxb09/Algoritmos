#include<stdio.h>

int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
    printf("Escreva as variaveis a, b, c ,d:   ");
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    scanf("%i", &d);
    e=a*b;
    f=a+b;
    g=a*c;
    h=a+c;
    i=a*d;
    j=a+d;
    k=b*c;
    l=b+b;
    m=b*d;
    n=b+d;
    o=c*d;
    p=c+d;
    printf("a*b= %i\n", e);
    printf("a+b= %i\n", f);
    printf("a*c= %i\n", g);
    printf("a+c= %i\n", h);
    printf("a*d= %i\n", i);
    printf("a+d= %i\n", j);
    printf("b*c= %i\n", k);
    printf("b+c= %i\n", l);
    printf("b*d= %i\n", m);
    printf("b=d= %i\n", n);
    printf("c*d= %i\n", o);
    printf("c+d= %i\n", p);
}
