#include <stdio.h>
#include <string.h>


void decimalToBinary(int num);

int main() 
{
    int decimal;
    printf("请输入一个十进制整数: ");
    scanf("%d", &decimal);
    printf("%d 的二进制表示为: ", decimal);
    decimalToBinary(decimal);
    printf("\n");
    
    return 0;
}
void decimalToBinary(int num) {
   
    if (num == 0) 
    {
        printf("0");
        return;
    }   
    int isNegative = 0;
    if (num < 0) {
        isNegative = 1;
        num = -num; 
    }
    char binary[33]; 
    int index = 0;
    while (num > 0) {
        binary[index++] = (num % 2) ? '1' : '0';
        num /= 2;
    }
    binary[index] = '\0'; 
    if (isNegative) {
        printf("-");
    }
    for (int i = index - 1; i >= 0; i--) 
    {
        printf("%c", binary[i]);
    }
}
