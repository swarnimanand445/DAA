#include<bits/stdc++.h>
using namespace std;
struct item
{
    int value;
    int weight;
};
bool cmp(item a,item b)
{
    int r1=(double)a.value/a.weight;
    int r2=(double)b.value/b.weight;
    return r1>r2;
}
double fractional_kanpsack(int w,item arr[],int n)
{
    sort(arr,arr+n,cmp);
    int curr_wt=0;
    int final_value=0;
    for(int i=0;i<n;i++)
    {
        if(curr_wt+arr[i].weight<=w)
        {
            curr_wt+=arr[i].weight;
            final_value+=arr[i].value;
        }
        else
        {
            int remain=w-curr_wt;
            final_value+=arr[i].value*((double)remain/arr[i].weight);
            break;
        }
        
    }
    return final_value;
}
int main()
{
    int w=50;
    item arr[]={{120,30},{60,10},{100,20}};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum value can be obtain "<<fractional_kanpsack(w,arr,n);
}