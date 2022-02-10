#include <stdio.h>

// type nome = valor;

/*
    type: [int, float, double, char]
    especificador: [%d ou %i, %lf, %d, %c]

*/

int main(){
    const float PI = 3.14;
    int Idade = 22;
    float Altura = 1.29;
    double Medida = 1.5987;
    char Genero = 'M';

    printf("A minha Idade é %i ou %d\n", Idade, Idade);
    printf("A minha Altura é %f\n", Altura);
    printf("A minha Medida é %lf\n", Medida);
    printf("O meu Genêro é %c\n", Genero);
    printf("O valor de PI é sempre %0.2lf", PI);
}
