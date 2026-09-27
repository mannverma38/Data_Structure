#include <stdio.h>
#include <stdlib.h>

struct Node {
    int c,e;
    struct Node *next;
};

int main() {
    struct Node *head=NULL,*p,*q;
    int n,i;

    scanf("%d",&n);

    for(i=0;i<n;i++) {
        p=malloc(sizeof(struct Node));

        scanf("%d%d",&p->c,&p->e);
        p->next=NULL;

        if(!head) head=p;
        else {
            q=head;
            while(q->next) q=q->next;
            q->next=p;
        }
    }

    for(q=head;q;q=q->next)
        printf("%dx^%d ",q->c,q->e);

    return 0;
}