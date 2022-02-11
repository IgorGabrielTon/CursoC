#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_Br.UTF-8");
    
    int Idade;
    
    puts("Digite sua idade abaixo:");
    scanf("%d", &Idade);
    
    if(Idade <= 12){
        puts("Você ainda é criança!");
    }else if(Idade >= 13 && Idade <= 24){
        puts("Você ainda é Adolecente!");
    }else if(Idade >= 25 && Idade <= 40){
        puts("Você ainda é Adulto!");
    }else{
        puts("Você já é de IDADE :) !");
    }
    
    return 0;
}
