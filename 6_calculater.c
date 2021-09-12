//calculator for 2, 3, and 4 numbers entered by user

#include <stdio.h>
void hmn2();
void hmn3();
void hmn4();
char operator;
float first, second, third, fourth;
float sum, substract, multiply, divide;

int main()
{
    int hmn;
    printf("How many number you want to calculate in this calculator--> ");
    scanf("%d", &hmn);
    if (hmn == 2)
    {
        hmn2();
    }
    else if (hmn == 3)
    {
        hmn3();
    }
    else if (hmn == 4)
    {
        hmn4();
    }
    else
    {
        printf("Please enter number between (2-4)\n");
    }

    printf("Thanks for using this calculator\n");
    return 0;
}

void hmn2()
{

    printf("Which operator do you want to use(+,-,*,/)?\n");
    scanf("%s", &operator);

    printf("Enter the first number-->");
    scanf("%f", &first);
    printf("Enter the second number-->");
    scanf("%f", &second);

    sum = first + second;
    substract = first - second;
    multiply = first * second;
    divide = first / second;

    switch (operator)
    {
    case '+':
        printf("sum of your entered number is %f\n", sum);
        break;
    case '-':
        printf("substract of your entered number is %f\n", substract);
        break;
    case '*':
        printf("multiplication of your entered number is %f\n", multiply);
        break;
    case '/':
        printf("division of your entered number is %f\n", divide);
        break;
    }
}
void hmn3()
{
    printf("Which operator do you want to use(+,-,*,/)?\n");
    scanf("%s", &operator);

    printf("Enter the first number-->");
    scanf("%f", &first);
    printf("Enter the second number-->");
    scanf("%f", &second);
    printf("Enter the third number-->");
    scanf("%f", &third);

    sum = first + second + third;
    substract = first - second - third;
    multiply = first * second * third;
    divide = first / second / third;

    switch (operator)
    {
    case '+':
        printf("sum of your entered number is %f\n", sum);
        break;
    case '-':
        printf("substract of your entered number is %f\n", substract);
        break;
    case '*':
        printf("multiplication of your entered number is %f\n", multiply);
        break;
    case '/':
        printf("division of your entered number is %f\n", divide);
        break;
    }
}
void hmn4()
{
    printf("Which operator do you want to use(+,-,*,/)?\n");
    scanf("%s", &operator);

    printf("Enter the first number-->");
    scanf("%f", &first);
    printf("Enter the second number-->");
    scanf("%f", &second);
    printf("Enter the third number-->");
    scanf("%f", &third);
    printf("Enter the fourth number-->");
    scanf("%f", &fourth);

    sum = first + second + third + fourth;
    substract = first - second - third - fourth;
    multiply = first * second * third * fourth;
    divide = first / second / third / fourth;

    switch (operator)
    {
    case '+':
        printf("sum of your entered number is %f\n", sum);
        break;
    case '-':
        printf("substract of your entered number is %f\n", substract);
        break;
    case '*':
        printf("multiplication of your entered number is %f\n", multiply);
        break;
    case '/':
        printf("division of your entered number is %f\n", divide);
        break;
    }
}