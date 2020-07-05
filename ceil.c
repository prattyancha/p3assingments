//example od ceil()
#include<stdio.h>
#include<math.h>
int main()
{
    double num=8.33;
    int result;

    //printf("Enter number:");
    //scanf("%.2f",&num);

    result = ceil(num);

    printf("Celling number of %.2lf=%d",num,result);

    return 0;
}
