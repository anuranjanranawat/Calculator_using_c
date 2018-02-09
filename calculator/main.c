#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num1,num2,sign,result;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter the sign of Addition or Subtraction or Multiplication or Division: ");
    sign = getch();
    printf("%c",sign);
    printf("\nEnter the second number: ");
    scanf("%d",&num2);
    printf("%d %c %d\n",num1,sign,num2);
    switch(sign)
    {
    case '+':
        result = num1 + num2;
        printf("Addition of %d and %d is %d ",num1,num2,result);
        break;
    case '-':
        result = num1 - num2;
        printf("Subtraction of %d and %d is %d ",num1,num2,result);
        break;
    case '*':
        result = num1 * num2;
        printf("Multiplication of %d and %d is %d ",num1,num2,result);
        break;
    case '/':
        result = num1 / num2;
        printf("Division of %d and %d is %d ",num1,num2,result);
        break;
    default:
        printf("You can only do 4 type of calculation '_' " );
    }
    return 0;
}
