#include <stdio.h>


int main(){
 
    //C não suporta boolean naturalmente :(
    
    int a = 50;
    int b = 20;
    
    int igual = a == b;
    int NotIgual = a != b;
    int Greather_Than = a > b;
    int Less_than = a < b;
    int GI = a >= b;
    int LI = a <= b;
    
    printf("%i", igual);
    
    return 0;
}
