#include <stdio.h>

int main()
{
    float nDigitado , nDigitado_emDobro;

    printf( "Digite um numero: " )   ;   scanf( "%f" , &nDigitado );

    nDigitado_emDobro = nDigitado * 2 ;

    printf( "O dobro do numero informado e: %2.2f \n " , nDigitado_emDobro );

}