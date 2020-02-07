#include<bits/stdc++.h>
using namespace std;
void activity(int s[],int f[],int n)
{
    int i,j;
    cout<<"following activities are selected";
    i=0;
    cout<<i<<" ";
    for(j=1;j<n;j++)
    {
        if(s[j]>=f[i])
        {
            cout<<j<<" ";
            i=j;
        }
    }
}
int main()
{
    int s[20],f[20];
    int n;
    cout<<"enter the value of n";
    cin>>n;
    cout<<"enter the elements in s array";
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    cout<<"enter the elements in f array";
    for(int i=0;i<n;i++)
    {
        cin>>f[i];
    }
    activity(s,f,n);
    return 0;
}