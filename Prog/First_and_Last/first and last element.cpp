#include<iostream>
using namespace std;
int binary_search_start(int s,int e,int arr[],int target,int start)
{
    while(s<=e)
    {
        int mid = (s+e)/2;
        if (arr[mid]==target)
        {
            start = mid;
            e = mid-1;
        }
        else if (target<arr[mid])
            e= mid-1;
        else
            s = mid+1;
    }
    if (start !=-1)
        return start;
    else
        return -1;
}
int binary_search_end(int s,int e,int arr[],int target,int end)
{
    while(s<=e)
    {
        int mid = (s+e)/2;
        if (arr[mid]==target)
        {
            end = mid;
            s = mid+1;
        }
        else if (target<arr[mid])
            e= mid-1;
        else
            s = mid+1;
    }
    if (end !=-1)
        return end;
    else
        return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int start =-1;
    int end = -1;
    int s=0;
    int e = n-1;
    cout << binary_search_start(s, e, arr, target, start) << " " << binary_search_end(s, e, arr, target, end);

}
