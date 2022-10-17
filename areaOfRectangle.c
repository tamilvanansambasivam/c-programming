#include<stdio.h>
int main()
{
     int length, breadth, rect_area;
     printf("Enter Length  : ");
     scanf("%d",&length);
     printf("Enter Breadth : ");
     scanf("%d",&breadth);
     rect_area = length * breadth;
     printf("Area of Rectangle = %d\n",rect_area);
     return 0;
}