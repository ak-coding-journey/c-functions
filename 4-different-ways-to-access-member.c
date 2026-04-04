#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node * next ;
};

int main()
{
    struct node n1,n2,n3,n4;
    struct node * p;

    p=&n1;

    (*(&n3));

    n1.data=10;
    n2.data=20;
    n3.data=30;
    n4.data=40;

    n1.next=&n2;
    n2.next=&n3;
    n3.next=NULL;

    printf("%d\n",(*p).data);
    printf("%d\n",n1.next->data);
    printf("%d\n",(*(&n3)).data);
    printf("%d\n",n4.data);

    return 0;
}
