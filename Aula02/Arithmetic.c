#include <stdio.h>

int main(){
    
    int a = 50;
    int b = 2;
    
	int Addition = a + b;
	int Subtraction = a - b;
	int Multiplication = a * b;
	int Division = a / b;
	int Modulus = a % b;
	int Increment = ++a;
	int Decrement = --b;
	
	printf("%i\n", Addition);
    printf("%i\n", Subtraction);
    printf("%i\n", Multiplication);
    printf("%i\n", Division);
    printf("%i\n", Modulus);
    printf("%i\n", Increment);
    printf("%i", Decrement);
    
    return 0;
}
