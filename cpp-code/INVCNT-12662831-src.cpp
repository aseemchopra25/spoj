#include<cstdio>
#include<iostream>
using namespace std;
long long int mSort(long long int arr[], long long int temp[], long long int left, long long int right);
long long int merge(long long int arr[], long long int temp[],long long int left, long long int mid, long long int right);
long long int mergeSort(long long int arr[], long long int array_size)
{
    long long int *temp=new long long int [array_size];
    return mSort(arr,temp,0,array_size-1);
}
long long int mSort(long long int arr[], long long int temp[], long long int left, long long int right)
{
    long long int mid,inv_count=0;
    if(right>left)
    {
        mid=(right+left)/2;
        inv_count=mSort(arr,temp,left,mid);
        inv_count+=mSort(arr,temp,mid+1,right);
        inv_count+=merge(arr,temp,left,mid+1,right);
    }
    return inv_count;
}
long long int merge(long long int arr[], long long int temp[],long long int left, long long int mid, long long int right)
{
    long long int i,j,k;
    long long int inv_count=0;
    i=left;
    j=mid;
    k=left;
    while(i<=mid-1 && j<=right)
    {
        if(arr[i]<=arr[j])
            temp[k++]=arr[i++];
        else
        {
            temp[k++]=arr[j++];
            inv_count+=mid-i;
        }
    }
    while(i<=mid-1)
        temp[k++]=arr[i++];
    while(j<=right)
        temp[k++]=arr[j++];
    for(i=left;i<=right;i++)
        arr[i]=temp[i];
    return inv_count;
    
}
int main()
{
    long long int t,n;
    scanf("%lld",&t);
    for(long long int i=0;i<t;i++)
    {
        scanf("%lld",&n);
        long long int a[n];
        for(long long int j=0;j<n;j++)
            scanf("%lld",&a[j]);
        printf("%lld\n",mergeSort(a,n));
    }
    return 0;
}
