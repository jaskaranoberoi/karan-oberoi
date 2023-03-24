#include <stdio.h>
int main()
{
    int a,b,c;
    float Average;
    printf("Enter First Number :");
    scanf("%d",&a);
    printf("Enter Second  Number:");
    scanf("%d",&b);
    printf("Enter Third  Number:");
    scanf("%d",&c);
    Average = (a+b+c)/3.0;
    printf("The Average is %f",Average);
    return 0;
    
}
