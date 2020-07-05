// example od sqrt()
#include<stdio.h>
#include<math.h>
int main()
{
    double num,result;

    printf("Enter number:");
    scanf("%lf",&num);

    result=sqrt(num);

    printf("%.1lf^1/2=%.2lf",num,result);

    return 0;
}

