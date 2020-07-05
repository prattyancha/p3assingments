//example of strupr

#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter string:");
    scanf("%s",&str);
    //gets(str);
    //printf("String is:%s",str);
    printf("\nupper string is:%s",strupr(str));
    return 0;
}
