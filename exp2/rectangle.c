//WAP a C program to calculate the area and perimeter of a rectangle based on its length and width. 

#include<stdio.h>
int main()
{
    int length,breadth,area,perimeter;
    printf("Enter length and breadth of the rectangle");
    scanf("%d %d",&length,&breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);

    printf("Area of rectangle is %d\n",area);
    printf("Perimeter of rectngle is %d\n",perimeter);
    return 0;
}

