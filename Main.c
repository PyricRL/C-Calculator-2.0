#include <stdio.h>
#include <math.h>

int main (){
    //our stuff here ig

    double firstNum;
    double secondNum;
    double result;

    char operator;

    printf("Enter first number");
    scanf(" %lf", &firstNum);

    printf("Enter second number");
    scanf(" %lf", &secondNum);

    printf("Enter your thingy");
    scanf(" %c", &operator);

    switch(operator){
        case '*': result = firstNum * secondNum;
        break;
    }

    printf("\nresult: %lf", result);

    return 0;
}