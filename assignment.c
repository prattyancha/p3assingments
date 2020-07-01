//store employee details using struct
#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
typedef struct
{
    char name[30];
    int id;
    int expyr;
    int salary;
}employee;
int main()
{
    int i,n=5;
    employee e[n];

    printf("Employee %d Details:\n\n",n);
    for(i=0;i<n;i++)
    {
       // printf("\n noof employees %d=",i+1);
       // scanf("%d",&n);
        printf("Employee %d:- \n",i+1);

        printf("name:");
        //gets(e[i].name);
        scanf("%s",e[i].name);

        printf("ID:");
        //gets(e[i].id);
        scanf("%d",&e[i].id);

        printf("Experience:");
        //gets(e[i].expyr);
        scanf("%d",&e[i].expyr);

        printf("salary:");
        //gets(e[i].sal);
        scanf("%d",&e[i].salary);

        printf("\n");

    }
    printf(".............All Employee Details.............\n");

    for(i=0;i<n;i++)
    {
        printf("name\t:");
        printf("%s\n",e[i].name);

        printf("ID\t:");
        printf("%d\n",e[i].id);

        printf("Experience\t:");
        printf("%d\n",e[i].expyr);

        printf("salary\t:");
        printf("%d\n",e[i].salary);

        printf("\n");
    }
    return 0;
}
