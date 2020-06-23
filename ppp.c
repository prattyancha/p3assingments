#include<stdio.h>
 int main()
 {
     int a,b;

     printf("enter a:");
     scanf("%d",&a);
     printf("enter b:");
     scanf("%d",&b);
     printf("OUTPUT=%d\n",a&b);
     printf("OUTPUT=%d\n",a|b);
     printf("OUTPUT=%d\n",a^b);
     printf("OUTPUT=%d\n",~b);
     printf("OUTPUT=%d\n",a<<b);
     printf("OUTPUT=%d\n",a>>b);

    return 0;

 }
