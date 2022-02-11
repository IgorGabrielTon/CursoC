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

void GravarTXT(FILE Arq, char* Texto){
    fprintf(Arq, Texto);
    fclose(Arq);
}

int main(){
    
    FuncVaziaApr();
    
    FILE *Arquivo = fopen("Arquivo.txt", "w");
    
    if(Arquivo==NULL){
        print("Não foi possivel localizar o arquivo!");
        exit(1);
    }
    
    GravarTXT(arquivo, "Meu Primeiro TXT in C. heh");
    
}
