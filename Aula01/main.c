//Para comentar uma única linha é usado duas barras

/*
 
    Para comentar multilinhas é usado barra + arterísco
 
 */

/*
    Para a maiorias dos apps que precisam ler ou escrever no console é necessário importar o stdio.h
    O comando para importar é o #include <nome.h>
    
    O stdio.h nos disponibiliza acesso as funções para escrita { puts ("Msg"); , printf("Msg") }, onde o puts coloca uma linha no final e o printf serve para formatar }
    e para ler o scanf()
*/



#include <stdio.h>

int main(){
        
    puts("Olá Mundo!");
    puts("");
    puts("O puts() serve para apenas repetir o texto sobre aspas e ir para próxima linha.");
    printf("Já o printf() é permitido interpolar a string e processa-la!");
    
    printf("A soma de %d + %d = %d", 10,5, 10+5);
    
    printf("Umas %s extras!", "Fritas");
    
    
    
    system("pause"); //Funcional apenas no Windows CMD!
    
    
    puts("Digite um tecla para continuar");
    
    getchar();
    
    
    return 0;
}
  /*
  Número inteiro %d
  Número Real %f
  Char %c
  Char[] ou string %s
  \n pula linha
  */
