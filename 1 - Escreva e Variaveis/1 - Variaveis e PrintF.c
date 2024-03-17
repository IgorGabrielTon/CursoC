#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    printf("Tipos de variáveis!\n");
    printf("Tipo Nome\n");

    int Numero = 10;
    float Numero2 = 14.75;
    double Numero3 = 100.50;
    char Letra = 70;            //Código ASCII ou letra 'F'
    bool Logico = true;        //Include necessário! #include <stdbool.h>


    int a = 10, b = 30, c = 40, d;


    printf("O número é %d.\n", Numero); //Usa %d para int
    printf("O número é %.2f.\n", Numero2); //Usa %f para float e double e .2 para formatar casas decimais
    printf("A letra é %c.\n", Letra); //Usa %c para char

    //O boolean nao vai! precisa de um if para resolver
    printf("A letra é %s.\n", Logico ? "True" : "False"); //Usa %s para string




    return 0;
}
