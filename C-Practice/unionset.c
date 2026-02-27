#include<stdio.h>
int main()
{
    int a[50],b[50],c[50],i,temp,j,n,m,k;
    printf("Enter the size of array A: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the size of B: ");
    scanf("%d",&m);
    for (j=0;j<m;j++){
        scanf("%d",&b[j]);
    }
    for (i=0;i<n;i++)
    {
        c[k]=a[i];
    }
    z = n+m
    for(i=0;i<z;i++)
    {
        for(j=i+1;j<z-1;j++)
        {
            if ( c[i]>c[j]){
                temp = c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    printf("The sorted array is: ");
    for(i=0;i<z;i++)
    {
        printf("\n%d",c[i]);
    }
    return 0;
}