#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head=NULL,*p,*q;
    int n,x,key,i,found=0;

    scanf("%d",&n);

    for(i=0;i<n;i++) {
        p=malloc(sizeof(struct Node));
        scanf("%d",&x);
        p->data=x; p->next=NULL;

        if(!head) head=p;
        else {
            q=head;
            while(q->next) q=q->next;
            q->next=p;
        }
    }

    scanf("%d",&key);

    for(q=head;q;q=q->next)
        if(q->data==key) found=1;

    if(found) printf("Found");
    else printf("Not Found");

    return 0;
}