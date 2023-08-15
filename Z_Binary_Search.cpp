#include<bits/stdc++.h>
using namespace std;

int binarysearch(int n,int x,int a[])
{

    int first=0,last=n-1;
    for(int i = 0;i<n;i++)
    cout<<a[i]<<" " ;
    
    while(first<=last)
    {
        int mid=(first+last)/2;

        if(a[mid]==x)
        {
            return mid;
        }
        else if(a[mid]>x)
        {
            last=mid-1;
        }
        else
        {
            first=mid+1;
        }
    }

    
    return -1;



}

int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<q; i++)
    {
        int x;
        cin>>x;

        int result=binarysearch(n,x,a);
        if(result==-1)
        {
            cout<<"not found"<<endl;
        }
        else
        {
            cout<<"found"<<endl;
        }
    }

    return 0;
}