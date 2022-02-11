#include <stdio.h>
#include <locale.h>
#include <monetary.h>

int main(){
    //setlocale( int Category, locale or "" to english)     
    setlocale(LC_ALL, "pt_BR");
  
    double Money = 1524.55;
  
    //Convert to String
    char MoneyBr[16];
  
    //Monetary
    strfmon(MoneyBr, 12, "%n", Money);
  
    printf("Valor Local: %s", MoneyBr);
  
  
 
}
