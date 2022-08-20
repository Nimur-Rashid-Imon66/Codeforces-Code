/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */

#include <bits/stdc++.h>
using namespace std;
#define pi             (3.141592653589)
#define mod            1000000007
#define nl             endl
#define Nl             endl
#define pb             push_back
#define in             insert
#define ff             first
#define ss             second
#define pii            pair<int,int>
#define pll            pair<ll,ll>
#define vi             vector<int>
#define vl             vector<ll>
#define vii            vector<pair<int,int>>
#define vll            vector<pair<ll,ll>>
#define vc             vector<char>
#define vs             vector<string>
#define vpll           vector< pair<ll,ll> >
#define sei            set<int>
#define usei           unordered_set<int>
#define ses            set<string>
#define sepii          set< pair<int,int> >
#define di             deque<int>
#define sti            stack<int>
#define qi             queue<int>
#define pqi            priority_queue<int>
#define mpii           map<int,int>
#define mpll           map<ll,ll>
#define umii           unordered_map<int,int>
#define testcase       {ll t;cin>>t;while(t--){solve();}}
#define NO             cout << "NO" << endl;
#define Yes            cout << "Yes" << endl;
#define No             cout << "No" << endl;
#define yes            cout << "yes" << endl;
#define no             cout << "no" << endl;
#define YES            cout << "YES" << endl;
#define all(c)         c.begin(), c.end()
#define rall(c)        c.rbegin(), c.rend()
#define min3(a, b, c)  min(c, min(a, b))
#define min4(a, b,c,d) min(d, min(c, min(a, b)))
#define rrep(i, n)     for(int i=n-1;i>=0;i--)
#define rep(i,n)       for(int i=0;i<n;i++)
#define fastIO ios::sync_with_stdio(0); cin.tie(0); 
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
int dx[8] = {-1, 1, 0, 0,-1,1,-1,1};
int dy[8] = {0, 0, 1, -1,-1,1,1,-1};


void solve()
{
    int n;
    cin>>n;
    vi a(n+1),target(n+1);
    a[0] = 0;
    target[0] = 0;
    for (int i=1;  i<= n;i++)
    {
       cin>>a[i];
       target[i] = i;
    }
    vi ans(n + 1, 0);
    
    for (int i = n; i > 0;i--)
    {
       if(a[i]==target[i])
           continue;
       vi tamp(n+1);
       for (int j = i + 1; j <= n;j++)
           tamp[j] = a[j];
       int x;
       for (int j = 1; j <= n;j++)
       {
           if(a[j]==i)
           {
               x = j;
               break;
           }
       }
       int k = 1;
       for (int j = x+1; j <= i;j++,k++)
           tamp[k] = a[j];
       for (int j = 1; j <= x; j++, k++)
           tamp[k] = a[j];
       ans[i] = x;
       a = tamp;
    }
    for(int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    cout<<endl;
    
}
int main(){
fastIO
testcase
//solve();
return 0;
}
