#include <stdio.h>
#include <stdlib.h>

int main()
{
struct employee

{
    char name[3];
    int id;
    char dept[5];
        struct salary
    {
        int da;
        int basic;
        int hra;
    }s;
}e;
int gross,i,n;

printf("\n enter the names ");
scanf("%s",e.name);
printf("\n enter id");
scanf("%d",&e.id);
printf("\n enter the dept");
scanf("%s",e.dept);
printf("\n enter da ,basic,hra");
scanf("%d%d%d",&e.s.da,&e.s.basic,&e.s.hra);
gross=e.s.basic+e.s.da+e.s.hra;
printf("\n Name:%s\n id:%d\n dept:%s\n Gross:%d",e.name,e.id,e.dept,gross);
    return 0;
}
