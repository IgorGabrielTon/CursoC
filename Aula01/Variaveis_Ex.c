#include <stdio.h>

int main(){
    puts("#----------------------------------------------------------#");
    puts("");
    puts("Conversor de Metros para outras unidades Ver 1.0 10/02/2022");
    puts("");
    puts("#----------------------------------------------------------#");
    
    double Metros, Decimetros, Centimetros, Milimitros;
    
    printf("Digite a unidade em Metros Quadrados: ");
    scanf("%lf", &Metros);
    puts("");
    printf("%0.2lf Metros Quadrados é equivalente: \n", Metros);
    puts("");
    printf("%0.2lf Decimetro(s)\n", Metros * 10);
    printf("%0.2lf Centimetro(s)\n", Metros * 100);
    printf("%0.2lf Milimitro(s)\n", Metros * 1000); 
    puts("");
    puts("#----------------------------------------------------------#");
}
