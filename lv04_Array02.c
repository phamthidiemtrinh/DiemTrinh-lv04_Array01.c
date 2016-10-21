#include <stdio.h>
void main ()
{
    float a[20][20],max;
    int i,j,m,n;
    printf("nhap so dong :\n");
    scanf("%d",&m);
    printf("nhap so cot :\n");
    scanf("%d",&n);
    for (i=0;i<m;i++)
        for (j=0;j<n;j++)
    {
        printf("a[%d,%d]=",i,j);
        scanf("%f/n",&a[i][j]);
    }
    max=a[0][0];
    for (i=0;i<m;i++)
      for (j=0;j<n;j++)
        if (a[i][j]>max) max=a[i][j];
    printf("so lon nhat = %f ",max);
}
