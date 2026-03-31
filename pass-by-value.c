#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    int id;
    float marks;
};

void pstud(struct student s)
{
    printf("%d\n",s.id);
    printf("%.2f",s.marks);
}
int main()
{
   struct student r1;

   r1.id=1223;
   r1.marks=21.99;

   
   
   pstud(r1);
   
   return 0;
}