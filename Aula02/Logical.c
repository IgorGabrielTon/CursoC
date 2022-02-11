#include <stdio.h>


int main(){
 
    //C não suporta boolean naturalmente :(
    
    int a = 50;
    int b = 20;
    
    int c = a == b && b == a;
    int d = a == b || b == a;
    int e = !(a == b);
    
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    
    return 0;
}
