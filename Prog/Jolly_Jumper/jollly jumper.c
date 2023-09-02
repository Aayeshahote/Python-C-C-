#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int flag =0;
    for (int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i =0;i<n-1;i++)
    {
        int diff = abs(arr[i]-arr[i+1]);
        if (diff >=1 && diff <=n-1)
        {
            flag =1;
            continue;
        }
        else
        {
            flag =0;
            break;
        }
    }
    if (flag)
        printf("Jolly");
    else
        printf("Not jolly");
}
