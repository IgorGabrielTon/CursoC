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

void LerTXT(FILE Arq){
    char c;
    while((c=fgetc(Arq))!= EOF){
        putchar(c);
    } 
    fclose(Arq);
    printf("%s\n", c);
}

int main(){
    
    FuncVaziaApr();
    
    FILE *ArquivoW = fopen("Arquivo.txt", "w");
    FILE *ArquivoR = fopen("Arquivo.txt", "r");
    
    if(Arquivo==NULL){
        print("Não foi possivel localizar o arquivo!");
        exit(0);
    }
    
    GravarTXT(ArquivoW, "Meu Primeiro TXT in C. heh");
    LerTXT(ArquivoR);
}
