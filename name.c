//Write a program that prompts the user to enter their name and age. 

#include<stdio.h>
int main()
{
    char name;
    int age;
    printf("Enter your name and age \n");
    scanf("%s",&name);
    scanf("%d",&age);
    printf("Name=%s \n",name);
    printf("Age=%d",age);
}
