#include<bits/stdc++.h>
#define fasterIO ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define nl endl
#define testcase {ll t;cin>>t;while(t--){slove();}}

#define YES cout<<"YES"<<nl;
#define NO cout<<"NO"<<nl;
#define Yes cout<<"Yes"<<nl;
#define No cout<<"No"<<nl;

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

bool binary_src(int arr[],int n,int data)
{
    int big=0,End=n-1,mid=(big+End)/2;
    while(big<=End&&arr[mid]!=data)
    {
        if(data<arr[mid])
            End=mid-1;
        else
            big=mid+1;
        mid=(big+End)/2;
    }
    if(arr[mid]==data)
        return 1;
    else
        return 0;

}

bool isprime(int x)
{
    bool prime[x+1];
    memset(prime, true, sizeof(prime));
    for(int p=2; p*p<=101; p++)
        if(prime[p]==true)
            for(int i=p*p; i<=101; i+=p)
                prime[i]=false;
    if(prime[x])
        return 1;
    else
        return 0;
}

int numofdiv(int x)
{
    if(x==1) return 1;
    int c=2;
    for(int i=2; i<=x/2; i++)
        if(x%i==0)
            c++;
    return c;
}
void slove()
{

}

int main()
{
    testcase
    return 0;
}
