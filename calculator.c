#include<stdio.h> // include stdio.h library

int main(void)
{       
    int a, b, result;
    char op; // to store the operator
    
    printf("Enter an expression: ");
    scanf("%d%c%d", &a, &op, &b);  // enter 2 integer variable with symbol 

    switch(op)
    {
        case '+':  
            result = a + b;  // Addition
            break;
        case '-':
            result = a - b;  // subtraction
            break;
        case '*':
            result = a * b; // Multiplication
            break;
        case '/':
            result = a / b; // Division
            break;              
    }
    
    printf("Result = %d", result);
    
    return 0; // return 0 to operating system
}
