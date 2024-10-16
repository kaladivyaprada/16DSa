#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct mark{
    char name[20];
    int marks[5];
    }s;
    int i,n,sum=0;

    printf("\n enter the name");
    scanf("%s",s.name);

    printf("\n enter the marks");
    for(i=0;i<5;i++)
        {
        scanf("%d",&s.marks[i]);

    }
    for(i=0;i<5;i++)
    {
 sum=sum+s.marks[i];
    }
    printf("\n Name:%s \n  the sum is %d",s.name,sum);



}
