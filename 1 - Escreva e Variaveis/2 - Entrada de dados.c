#include <stdio.h>
#include <stdlib.h>



int main(){

    int Numero = 0;
    float Altura, Largura;

    printf("Digite sua idade: ");
    scanf("%d", &Numero);   //Usa & para passar o end de memoria para alterar o valor! Pois em C o argumento vai so o valor e nao da pra mudar sem o end da memoria.
    printf("Sua idade: %d\n", Numero);


    printf("Agora fale sua a altura e largura do cartão: ");
    scanf("%f %f", &Altura, &Largura);
    printf("A altura e largura são: %.2f %.2f\n", Altura, Largura);



    system("pause");
    return 0;
}
