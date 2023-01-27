#include <stdio.h>

int main()
{
    float salarioAtual , salarioNovo , percentualDeReajuste ;

    printf( "Digite o salario atual em R$: " )                                              ;   scanf( "%f" , &salarioAtual ) ;
    printf( "Digite o percentual de reajuste em base decimal, p. ex., 10 /100 -> 0.10: ")    ;   scanf( "%f" , &percentualDeReajuste ) ;

    salarioNovo = salarioAtual + (salarioAtual * percentualDeReajuste ) ;

    printf( "O novo salario a ser recebido e de: R$ %2.2f \n" , salarioNovo ) ;
}