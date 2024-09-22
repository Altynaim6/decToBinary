#include <stdio.h>

int main(void) {
    double num = 10.7643789;  
    int intPart = (int)num;  
    double fracPart = num - intPart;

    printf("Integer Part: ");
    toBinary(intPart);  
    printf("\n");

    printf("Fruction Part: ");
    ExtraOne(fracPart, 8); 
    printf("\n");

    return 0;
}

void toBinary(int decimalNo) {
    if (decimalNo == 0) {  
        printf("0");
        return;
    }
}