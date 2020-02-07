#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n)
{
    cout<<"elements are sorted a/c to bubble sort\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
           if(arr[j]>arr[j+1])
           {
               swap(arr[j],arr[j+1]);
           }   
           
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void insertion_sort(int arr[],int n)
{
    int key,j,i;
    for( i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
       arr[j+1]=key;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int partition(int arr[],int p,int q)
{
    int pivot=arr[q];
    int i=p-1;
	for(int j=p;j<q;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[q]);	
	return (i+1);
}
void quick_sort(int arr[],int p,int q)
{
   	if(p<q)
	{
		int m=partition(arr,p,q);
		quick_sort(arr,p,m-1);
		quick_sort(arr,m+1,q);
	}
   
}
int r_partition(int arr[],int p,int q)
{
    srand(time(NULL));
    int random=p+rand()%(q-p);
    swap(arr[random],arr[q]);
    return partition(arr,p,q);
}
void r_quicksort(int arr[],int p,int q)
{
    if(p<q)
    {
        int m=r_partition(arr,p,q);
        r_quicksort(arr,p,m-1);
        r_quicksort(arr,m+1,q);
    }
}
void max_heapify(int arr[],int n,int i)
{
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n&&arr[l]>arr[largest])
    {
        largest=l;
    }
    if(r<n&&arr[r]>arr[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        max_heapify(arr,n,largest);
    }
}
void max_heapsort(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        max_heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        max_heapify(arr,i,0);
    }
}
void min_heapify(int arr[],int n,int i)
{
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n&&arr[l]<arr[largest])
    {
        largest=l;
    }
    if(r<n&&arr[r]<arr[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        min_heapify(arr,n,largest);
    }
}
void min_heapsort(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        min_heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        min_heapify(arr,i,0);
    }
}
void selection_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
}
int main()
{
    int data,n,ch;
    int arr[20];
    cout<<"enter the size of n\n";
    cin>>n;
    cout<<"enter the elements in vector\n";
    for(int i=0;i<n;i++)
    {
        //cin>>data;
        //arr.push_back(data);
        cin>>arr[i];
    }
    while(1)
    {
        cout<<"\n1.bubble\n2.insertion\n3.quicksort\n4.random quicksort\n5.Maxheapsort\n6.Minheapsort\n7.selection_sort\n8.exit";
        cout<<"enter your choice";
        cin>>ch;
        switch(ch)
        {
            case 1:
            bubble_sort(arr,n);
            break;

            case 2:
            insertion_sort(arr,n);
            break;

            case 3:
            quick_sort(arr,0,n-1);
            cout<<"A/c to quick sort :";
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            break;

            case 4:
            r_quicksort(arr,0,n-1);
            cout<<"A/C to randomized quick sort :";
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            break;

            case 5:
            max_heapsort(arr,n);
            cout<<"A/C to heap sort :";
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            break;

            case 6:
            min_heapsort(arr,n);
            cout<<"A/C to heap sort :";
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }

            case 7:
            selection_sort(arr,n);
            cout<<"A/c to selection sort";
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }

            case 8:
            exit(0);
        }
    }
}