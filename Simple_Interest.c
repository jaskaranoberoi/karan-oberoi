#include <stdio.h>
int main()
{
    int P,R,T;
    float SI;
    printf("Enter P :");
    scanf("%d",&P);
    printf("Enter R:");
    scanf("%d",&R);
    printf("Enter T :");
    scanf("%d",&T);
    SI = (P*R*T)/100.0;
    printf("Simple Interest is %f",SI);
return 0;
    
}
