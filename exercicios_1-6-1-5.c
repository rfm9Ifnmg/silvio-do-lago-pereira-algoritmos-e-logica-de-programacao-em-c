#include <stdio.h>

int main()
{
    float valorDaCompra_ANTES_DoDesconto, valorDaCompra_APOS_oDesconto, percentualDoDesconto;

    printf("Digite o valor da compra em R$: ")   ;   scanf("%f", &valorDaCompra_ANTES_DoDesconto);

    printf("Digite o percentual do desconto em base decimal, \n"
           "p. ex., 10/100 = 0.10: \n")   ;   scanf("%f", &percentualDoDesconto);

    valorDaCompra_APOS_oDesconto = valorDaCompra_ANTES_DoDesconto - (valorDaCompra_ANTES_DoDesconto * percentualDoDesconto);

    printf("O valor da compra apos o desconto e de R$: %2.2f \n", valorDaCompra_APOS_oDesconto);
}