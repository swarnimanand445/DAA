#include<bits/stdc++.h>
using namespace std;
void optimal_tapes(int l[],int n)//length of each tape should be executed
{
    sort(l,l+n);
    cout<<"Optimal order in which programs are to be"
            "stored is: "; 
    for(int i=0;i<n;i++)
    {
        cout<<l[i]<<" ";
    }
    double MRT=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<=i;j++)
        {
            sum+=l[j];
        }
        MRT+=sum;
    }
    MRT/=n;
    cout<<"\nMinimal Retrival Time of tapes is "<<MRT<<"\n";
}
int main()
{
    int n;
    cin>>n;
    int l[20];
    cout<<"enter the elements in array";
    for(int i=0;i<n;i++)
    {
        cin>>l[i];
    }
    optimal_tapes(l,n);
    return 0;
}