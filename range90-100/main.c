#include <stdio.h>
#include <stdlib.h>

int main()
{


    struct student
    {
        char name[20];
        char usn[20];
        char branch[20];
        float per;
    }s[10];

    int i,n;
    printf("\n enter the no. of students");
    scanf("%d",&n);
    printf("\n enter the details of %d students",n);
    for(i=0;i<n;i++)
    {
        printf("\n enter the name,usn,branch,per of student%d",i+1);
        scanf("%s %s %s %f",s[i].name,s[i].usn,s[i].branch,&s[i].per);
        printf("\n list of students whose per is in the range of 90-100");
    }
        for(i=0;i<n;i++)
        {
            if(s[i].per>=90 && s[i].per<=100)
                printf("\n%s \t %s \t %s \t %f",s[i].name,s[i].usn,s[i].branch,s[i].per);
        }

    return 0;
}
