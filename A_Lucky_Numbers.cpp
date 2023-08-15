/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : A_Lucky_Numbers.cpp */
/*             Date: 2023-03-29 15:21:05 */

#include <bits/stdc++.h>
using namespace std;
void dbg_out(){cerr<<endl;}
template<typename Head , typename... Tail>
void dbg_out(Head H,Tail... T){cerr<<' ' << H; dbg_out(T...);}
#define dbg(...) cerr<<"("<< #__VA_ARGS__ <<"):" , dbg_out(__VA_ARGS__)
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

ll intbanaw(vi a)
{
    int n = a.size();
    ll ans = 0;
    int p = 1;
    for(int i = n - 1; i >= 0; i--)
    {
        ans += a[i] * p;
        p*=10;
    }
    return ans;
}
void solve()
{ 
   int l , r;
   cin>>l;cin>>r;
   int n = min(100,(r-l+1));
   int ans;
   int ansmx = -1;
   int i = l;
    for(int j  = 1;j<=n;j++)
    {
        
        int mx = 0;
        int mn = 9;
        int x = i;
        while(x)
        {
            int y = x %10;
            x/=10;
            mx = max(mx , y);
            mn = min(mn , y);
        }
        if(ansmx < (mx - mn))
        {
            ans = i;
            ansmx = mx - mn ;
        }
      i++;
    }
    cout<<ans<<nl;


}
int main(){
fastIO
testcase
//solve();
return 0;
}

