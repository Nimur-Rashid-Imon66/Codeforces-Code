/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : B_Making_Towers.cpp */
/*             Date: 2022-07-18 21:28:57 */

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

ll node,edge;
vector<ll> adj[100000];
void graph_input()
{
   cin >> node >> edge;
   for (ll i = 0; i < edge;i++)
   {
       ll u, v;
       cin >> u >> v;
       adj[u].pb(v);
       adj[v].pb(u);
   }
}
void graph_output()
{
   for (ll i = 1; i <= node;i++)
     {
           cout << i << " : ";
           for(auto it : adj[i])
               cout << it << " ";
           cout << nl;
     }
}

void solve()
{
   int n;
   cin >> n;
   vi a(n);
   vector<int>fequ[n+4];
   
   for (int i = 1; i <= n;i++){
       int x;
       cin>>x;
       fequ[x].pb(i);
   }
   ll ans[n+2] = {0};
   for (int i = 1; i <= n;i++)
   {
       ll mx = 0;
       ll cnt;
    //    cout << fequ[i].size() << nl;
       if(fequ[i].size()==0||fequ[i].size()==1){
           ans[i] = fequ[i].size();
           continue;
       }
       for (int j = 0; j < fequ[i].size()-1;j++)
       {
        if(!j) cnt = 1;
        int x = abs(fequ[i][j] - fequ[i][j + 1]);
          if(x%2)
              cnt++;
         
       }
       mx = max(mx, cnt);
    //    cout << mx << nl;
       ans[i] = mx;
   }
   for(int i = 1; i <= n;i++)
       cout << ans[i] << " ";
   cout << nl;
} 
int main(){
fastIO
testcase
//solve();
return 0;
}
