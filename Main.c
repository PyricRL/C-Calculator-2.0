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

    // coment lol
    //another comment

    printf("\nresult: %lf", result);

    return 0;
}