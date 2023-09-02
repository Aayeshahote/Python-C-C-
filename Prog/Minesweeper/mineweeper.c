#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    char a[m][n];
    for (int i=0;i<m;i++)
    {
        for (int j =0;j<n;j++)
        {
            scanf("%c",a[i][j]);
        }
    }
    printf("\n");
    for (int i=0;i<m;i++)
    {
        for (int j =0;j<n;j++)
        {
            printf("%c\t",a[i][j]);
        }
        printf("\n");
    }
}
