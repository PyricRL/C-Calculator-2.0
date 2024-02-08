#include <stdio.h>
#include <math.h>

int main()
{
    // our stuff here ig

    double firstNum;
    double secondNum;
    double result;

    char operator;

    printf("Enter first number\n");
    scanf(" %lf", &firstNum);

    printf("Enter second number\n");
    scanf(" %lf", &secondNum);

    printf("Enter your thingy\n");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '*':
        result = firstNum * secondNum;
        break;
    
    case '+':
        result = firstNum + secondNum;
        break;
    
    case '-':
        result = firstNum - secondNum;
        break;
    
    case '/':
        result = firstNum / secondNum;
        break;
    }

    // Next we need to work on rounding based on the output.
    // If it is a 6.354300 we need to chop off the 00 at the end
    // If it is a full number than we remove all 0s after decimal

    printf("\nresult: %lf", result);

    return 0;
}