#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int p,int q)

{
	int pivot,i,j;
	i=p-1;
	pivot=arr[q];
	for(int j=p;j<q;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[q],arr[i+1]);	
	return i+1;
}
void quicksort(int arr[],int p,int q)
{  
	if(p<q)
	{
		int m=partition(arr,p,q);
		quicksort(arr,p,m-1);
		quicksort(arr,m+1,q);
	}
}
int main()
{
    int arr[20];
    int n,temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       // cin>>temp;
        //arr.push_back(temp);
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}