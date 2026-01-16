#include <stdio.h>

// Deklaracja funkcji obliczaj¹cej objêtoœæ prostopad³oœcianu
float objetoscProstopadloscianu(float a, float b, float c)
{
    return a * b * c;
}

int main()
{
    float a, b, c, objetosc;


    printf("Podaj dlugosc prostopadloscianu: ");
    scanf("%f", &a);

    printf("Podaj szerokosc prostopadloscianu: ");
    scanf("%f", &b);

    printf("Podaj wysokosc prostopadloscianu: ");
    scanf("%f", &c);


    objetosc = objetoscProstopadloscianu(a, b, c);


    printf("Objetosc prostopadloscianu wynosi: %.2f\n", objetosc);

    return 0;
}
