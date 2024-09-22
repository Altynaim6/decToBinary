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

    int binary[32];  
    int index = 0;

    while (decimalNo > 0) {
        binary[index] = decimalNo % 2; 
        decimalNo = decimalNo / 2;  
        index++;  
    }

    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

void ExtraOne(double decNum, int precision) {
    printf("."); 

    int extraBits = 0; 

    for (int i = 0; i < precision; ++i) {
        decNum *= 2.0;  
        int fractional_bit = (int)decNum;  
        printf("%d", fractional_bit);  
        decNum = decNum - fractional_bit;  
}