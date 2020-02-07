#include<bits/stdc++.h>
using namespace std;
void linear_search(vector<int>arr,int item)
{
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==item)
        {
            cout<<"data searched at position "<<i+1;
            break;
        }
       
    }

}
int binary_search(vector<int>arr,int l,int r,int x)
{

    if(r>=l)
    {
        int mid=(l+(r-1))/2;
        if(arr[mid]==x)
        return mid;
        else if(arr[mid]>x)
        return binary_search(arr,l,mid-1,x);
        else
        return binary_search(arr,mid+1,r,x);        
    }
    return -1;
}
int main()
{
    int ch,data,m,item;
    cout<<"enter the size of vector";
    cin>>m;
    vector<int> arr;
    cout<<"enter the element in array\n";
    for(int i=0;i<m;i++)
    {
        cin>>data;
        arr.push_back(data);
    }
    while(1)
    {
        cout<<"\n1.linear\n2.binary\n3.exit";
        cout<<"enter the choice ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            cout<<"\nenter the item want to search";
            cin>>item;
            linear_search(arr,item);
            cout<<"\n";
            break;

            case 2:
            cout<<"enter the item want to search";
            cin>>item;
            sort(arr.begin(),arr.end());
            cout<<"\nThe key element is found at index no "<<binary_search(arr,0,arr.size(),item);
            break;

            case 3:
            exit(0);

            default:
            cout<<"enter another choice";
        }
    }
    
   return 0;
}