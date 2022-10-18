#include<stdio.h>
#include<math.h>
int main()
{
     int a,b,c;
     float s,triArea;
     printf("Enter Sides of Triangle\n");
     printf("----------------------------\n");
     printf("Enter First Side  : ");
     scanf("%d",&a);
     printf("Enter Second Side : ");
     scanf("%d",&b);
     printf("Enter Third Side  : ");
     scanf("%d",&c);
     s =(a+b+c)/2.0;
     //C program to find the area of a triangle using Heron's formula
     triArea=sqrt(s*(s-a)*(s-b)*(s-c));
     printf("----------------------------\n");
     /* %.3f is used to print an area up to three decimal places.
     Otherwise, it will take default 6 decimal places*/
     printf("Area of Triangle = %.3f\n",triArea);
     return 0;
}