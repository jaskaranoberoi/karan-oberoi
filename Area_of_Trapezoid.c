#include <stdio.h>
int main()
{
    int a,b,h, Area;
    printf("Enter first side of trapezoid ");
    scanf("%d",&a);
     printf("Enter second side of trapezoid ");
    scanf("%d",&b);
    printf("Enter height of trapezoid ");
    scanf("%d",&h);
    Area= ((a+b)*h)/2; 
    printf("Area of trapezoid is %d",Area);
    
    
return 0;    
}
