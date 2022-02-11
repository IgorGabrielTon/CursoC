#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_Br.UTF-8");
    
    int Nota;
    
    puts("Digite sua nota entre 1 á 3:");
    scanf("%d", &Nota);
    
    switch(Nota){
        case 0:
            puts("Nota Ruim!");
        break;
        case 1:
            puts("Nota Regular!");
        break;
        case 2:
            puts("Nota Boa!");
        break;
        case 3:
            puts("Nota Exelente!");
        break;
        default:
            puts("Erro!");
        break;
    }
    
    return 0;
}
