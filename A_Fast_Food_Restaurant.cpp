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
   int a,b,c;
   vector<int> arr;
   
   cin>>a>>b>>c;
   arr.pb(a);
   arr.pb(b);
   arr.pb(c);
   sort(rall(arr));
   a = arr[0];
   b = arr[1];
   c = arr[2];
   if(a>=4&&b>=4&&c>=4)
    {
        cout << 7 << nl;
        return;
    }
    else if(!a && !b && !c)
    {
        cout << 0 << nl;
        return;

    }
    else
    {
        int ans = 0;
        if(a)
        {
            ans++;
            a--;
        }
        if(b)
        {
            ans++;
            b--;
        }
        if(c)
        {
            ans++;
            c--;
        }
        if(a&&b)
        {
            ans++;
            a--,b--;
        }
        if(a&&c)
        {
            ans++;
            a--,c--;
        }
        if(b&&c)
        {
            ans++;
            b--,c--;
        }
        cout << ans << nl;
    }

}
int main(){
fastIO
testcase
//solve();
return 0;
}