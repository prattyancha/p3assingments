//example of strlwr()
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter The String:");
    scanf("%s",&str);
    printf("\nlower string is:%s",strlwr(str));
    return 0;
}
