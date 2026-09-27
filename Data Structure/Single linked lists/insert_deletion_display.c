#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *p, *q;
    int n, x, i;

    printf("Enter nodes: ");
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        p=malloc(sizeof(struct Node));
        scanf("%d",&x);
        p->data=x; p->next=NULL;

        if(head==NULL) head=p;
        else {
            q=head;
            while(q->next) q=q->next;
            q->next=p;
        }
    }

    /* Insert at beginning */
    p=malloc(sizeof(struct Node));
    printf("Enter value to insert: ");
    scanf("%d",&p->data);
    p->next=head;
    head=p;

    /* Delete first node */
    p=head;
    head=head->next;
    free(p);

    printf("List: ");
    for(q=head;q;q=q->next)
        printf("%d ",q->data);

    return 0;
}