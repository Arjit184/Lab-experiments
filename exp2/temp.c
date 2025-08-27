//WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32.

#include<stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter termperature in Celsius:");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature in Fahrenheit is %f\n",fahrenheit);
    return 0; 
}