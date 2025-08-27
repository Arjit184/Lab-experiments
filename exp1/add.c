//Write a C program to add two numbers, take number from user. 

#include<stdio.h>
int main()
{
    int a,b,sum=0;
    printf("Enter two numbers \n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum of two numbers= %d\n",sum);
    printf("%u", &a);
    return 0;
}
