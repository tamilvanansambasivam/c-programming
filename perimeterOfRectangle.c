#include<stdio.h>
int main()
{
     int length, breadth, rect_perimeter;
     printf("Enter Length  : ");
     scanf("%d", &length);
     printf("Enter Breadth : ");
     scanf("%d", &breadth);
     rect_perimeter= 2*(length+breadth);
     printf("Perimeter of Rectangle = %d\n",rect_perimeter);
     return 0;
}