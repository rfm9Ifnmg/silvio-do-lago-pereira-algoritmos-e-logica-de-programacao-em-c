#include <stdio.h>
#include <math.h>

int main()
{
    float totalDeVendas , comissao , valorAreceber ;

    printf( "Digite o valor das vendas: R$ " )   ;   scanf( "%f" , &totalDeVendas ) ;

    comissao = totalDeVendas * 0.10 ;

    valorAreceber = comissao ;

    printf( "O valor a ser recebido pelo vendedor referente a sua comissao e: R$ %2.2f \n" , valorAreceber ) ;




}