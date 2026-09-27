#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head=NULL,*p,*q;
    int n,x,i;

    scanf("%d",&n);

    for(i=0;i<n;i++) {
        p=malloc(sizeof(struct Node));
        scanf("%d",&x);
        p->data=x;
        p->next=NULL;

        if(!head) head=p;
        else {
            q=head;
            while(q->next) q=q->next;
            q->next=p;
        }
    }

    p=head;
    head=head->next;
    free(p);

    for(q=head;q;q=q->next)
        printf("%d ",q->data);

    return 0;
}