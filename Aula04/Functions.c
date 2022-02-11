#include <stdio.h>

void FuncVaziaApr(){
    puts("#----------------------------------------------#");
    puts("");
    puts("         AULA FINAL DA INTRODUÇÃO AO C          ");
    puts("");
    puts("#----------------------------------------------#");
}

const char* print(char texto[]){
    printf("%s\n", texto);
    return texto;
}

int main(){
    FuncVaziaApr();
    print("Até que em fim um print de Python hehe");
}
