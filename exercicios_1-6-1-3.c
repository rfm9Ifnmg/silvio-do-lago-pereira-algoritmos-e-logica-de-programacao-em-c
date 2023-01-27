#include <stdio.h>

int main()
{
    float base , altura , areaDoQuadrado ;

    printf( "Digite a base em metros: " )     ;    scanf( "%f" , &base ) ;
    printf( "Digite a altura em metros: " )   ;    scanf( "%f" , &altura ) ;

    areaDoQuadrado = base * altura ;

    printf( "A area do quadrado e de %2.2f m2 \n" , areaDoQuadrado ) ;
}