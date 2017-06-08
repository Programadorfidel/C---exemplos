#include <stdio.h>
#include <stdlib.h>

int fatorial(int numero)
{
    int fator=1;
    for (;numero>1;numero--)
    {
        fator=fator*numero;
    }

    return fator;
}

int somaN(int numero)
{
    int soma = 0;

    while (numero != 0) {
        soma   += numero % 10;
        numero  = numero / 10;
    }

    printf("%d",soma);

    return soma;
}


int main()
{
    int numero,fator;

    scanf("%d",&numero);

    fator=fatorial(numero);



    somaN(fator);




    return 0;
}
