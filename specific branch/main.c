#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   struct student
   {
       char name[10];
       char usn[10];
       char branch[10];
       float per;
   };
   struct student s[10];
   int i,n;
   printf("\n enter the  no. of students");
   scanf("%d",&n);
   printf("\n enter the details of %d students ",n);
   for(i=0;i<n;i++)
   {
       printf("\n enter the name,usn,branch,per of student %d ",i+1);
       scanf("%s%s%s%f",s[i].name,s[i].usn,s[i].branch,&s[i].per);
   }
   char branchs[10];
   printf("\n enter branch");
scanf("%s",branchs);
printf("\n the students of %s branch is",s[i].branch);
for(i=0;i<n;i++)
{
    if(strcmp(s[i].branch,branchs)==0)
        printf("\n %s \t %s \t %s \t %f \n ",s[i].name,s[i].usn,s[i].branch,s[i].per);
}

    return 0;
}
