#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "calculator.h"

float powers(float x, float y)
{
    return pow(x, y);
}

float divide(float x, float y)
{
    return x / y;
}

float add(float x, float y)
{
    return x + y;
}

float multiply(float x, float y)
{
    return x * y;
}

float subtract(float x, float y)
{
    return x - y;
}

void calculator()
{
    float valueOne;
    float valueTwo;
    char operator;
    float answer;

    printf("Enter calculation:\n\n");
    scanf_s("%f %c %f", &valueOne, &operator, 1, &valueTwo);

    switch (operator)
    {
    case '/': answer = divide(valueOne, valueTwo);
        break;
    case '*': answer = multiply(valueOne, valueTwo);
        break;
    case '+': answer = add(valueOne, valueTwo);
        break;
    case '-': answer = subtract(valueOne, valueTwo);
        break;
    case '^': answer = powers(valueOne, valueTwo);
        break;
    case ' ': answer = sqrt(valueTwo);
        break;
    default: goto fail;
    }
    printf("%.9g%c%.9g =  %.6g\n\n", valueOne, operator, valueTwo, answer);
    goto exit;
fail:
    printf("Fail.\n");
exit:
    return 0;
}