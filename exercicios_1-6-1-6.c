#include <stdio.h>

int main()
{
    float real , dolar , cotacaoDoDolar ;

    printf( "Digite o valor em real R$: " )    ;    scanf( "%f" , &real ) ;

    printf( ""
            "U$$ 1.00 equivale a R$ X.XX    \n"
            "Digite a contacao do dolar em R$: " )   ;   scanf("%f" , &cotacaoDoDolar) ;

    dolar = real / cotacaoDoDolar ;

    printf( "O valor de R$ %2.2f convertidos para dolares e de U$$ %2.2f \n" , real , dolar ) ;
}