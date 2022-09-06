#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    float firstNumber;
    float secondNumber;
    char op;
    
    printf("Enter you expression: ");
    scanf("%f %c %f", &firstNumber, &op, &secondNumber);
    
    switch (op) {
        
        case '+' :
        printf("%f + %f = %f", firstNumber, secondNumber, firstNumber + secondNumber);
        break;
        
        case '-' :
        printf("%f - %f = %f", firstNumber, secondNumber, firstNumber - secondNumber);
        break;
        
        case '*' :
        printf("%f * %f = %f", firstNumber, secondNumber, firstNumber * secondNumber);
        break;
        
        case '/' :
        printf("%f / %f = %f", firstNumber, secondNumber, firstNumber / secondNumber);
        break;
        
        // can use this for sqaure root by raising to 0.5 power
        case '^' :
        printf("%f ^ %f = %f", firstNumber, secondNumber, pow(firstNumber, secondNumber));
        break;
        
    }
    
    return 0;
}