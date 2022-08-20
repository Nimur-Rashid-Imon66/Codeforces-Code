/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : E_-_The_Knapsack_Problem.cpp */
/*             Date: 2022-08-03 21:44:17 */

#include <bits/stdc++.h>
using namespace std;
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

vpll a;
ll s, n;
ll dp[2010][2010] = {0};
ll knapsek(ll i , ll s)
{
    if(dp[i][s]) return dp[i][s];
    if(i==n)
        return 0;
    if(s<=0)
        return 0;
    ll ans1 = 0;
    if(s-a[i].ff >=0)
    {
        ans1 = a[i].ss + knapsek(i + 1, s - a[i].ff);
    }
    ll ans2 = knapsek(i + 1, s);
   // cout <<s<< " ";
    return dp[i][s] = max(ans1, ans2);
}
void solve()
{
    cin >> s >> n;
    for(int i=0;i<n;i++)
    {
        ll x, y;
        cin>>x >> y;
        a.pb({x, y});
    }
    ll ans = knapsek(0, s);
    cout << ans << nl;
}
int main(){
fastIO
//testcase
solve();
return 0;
}
