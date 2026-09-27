#include <stdio.h>

int main() {
    int a[10][2], b[10][2], c[20][2];
    int n,m,i,j,k=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d%d",&a[i][0],&a[i][1]);

    scanf("%d",&m);

    for(i=0;i<m;i++)
        scanf("%d%d",&b[i][0],&b[i][1]);

    i=0; j=0;

    while(i<n && j<m) {
        if(a[i][1]==b[j][1]) {
            c[k][0]=a[i][0]+b[j][0];
            c[k++][1]=a[i][1];
            i++; j++;
        }
        else if(a[i][1]>b[j][1])
            c[k][0]=a[i][0], c[k++][1]=a[i++][1];
        else
            c[k][0]=b[j][0], c[k++][1]=b[j++][1];
    }

    while(i<n)
        c[k][0]=a[i][0],c[k++][1]=a[i++][1];

    while(j<m)
        c[k][0]=b[j][0],c[k++][1]=b[j++][1];

    for(i=0;i<k;i++)
        printf("%dx^%d ",c[i][0],c[i][1]);

    return 0;
}