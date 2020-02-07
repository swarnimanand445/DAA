#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int getMax(int *arr,int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
void countSort(int *arr,int n,int pos,int m)
{
    int output[n];
    int count[m]={0};//because base value of integer is from 0 to 9 means total 10 numbers
    for(int i=0;i<n;i++)
    {
        count[(arr[i]/pos)%10]++;
    }
    for(int i=1;i<m;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        output[count[(arr[i]/pos)%10]-1]=arr[i];
        count[(arr[i]/pos)%10]--;
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=output[i];
    }
}
void radixSort(int *arr,int n)
{
    int m=getMax(arr,n);
    for(int pos=1;(m/pos)>0;pos*=10)
    {
        countSort(arr,n,pos,m);
    }
}
int main()
{
    int n;
    int arr[MAX];
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    radixSort(arr,n);
    cout<<"After radix sort\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}