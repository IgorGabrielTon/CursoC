#include <stdio.h>
#include <locale.h>


int main(){
    //setlocale( int Category, char[] Country )     
  setlocale(LC_ALL, "pt_Br.UTF-8");
  printf("Teste de digitação!");
}
