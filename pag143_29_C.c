#include<stdio.h>

int main()
{
    int a, b, c;
    printf("escreva o primeiro valor:  ");
    scanf("%i", &a);
    printf("escreva o segundo valor para ser calculado a diferen�a entre eles:  ");
    scanf("%i", &b);
    c=a-b;
    if(c<0);
    {
        printf("a diferen�a e menor que zero");
    }
    else;
    {
        prinf("a diferen�a e maior ou igual a zero");
    }
}

