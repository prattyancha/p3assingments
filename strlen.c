// example of strlen()

#include<stdio.h>
#include<string.h>

int main()
{
    char a[20]="program";
    char b[20]={'p','r','o','g','r','a','m'};

    printf("Length of string a=%d\n",strlen(a));
    printf("Length of string b=%d\n",strlen(b));

    return 0;
}
