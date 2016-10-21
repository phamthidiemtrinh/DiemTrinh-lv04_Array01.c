#include <stdio.h>
void main ()
{
    int a[100],i,min,max,n;
    printf("nhap so phan tu :\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d/n",&a[i]);
    }
    min=a[0];
    max=a[0];
    for (i=0;i<n;i++)
    {
        if (a[i]>max) max=a[i];
        if (a[i]<min) min=a[i];
    }
    printf("so lon nha= %d ",max);
    printf("so be nhat = %d",min);
}
