/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : E_The_Lakes.cpp */
/*             Date: 2023-05-06 21:49:11 */

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
int r,c;
int grid[1005][1005];
bool isvalid(int i,int j)
{

    if(i>=0 && i<r && j>=0 && j<c) return true;
    else return false;
}

bool vis[1005][1005];
ll dfs(int i ,int j)
{
    if(!isvalid(i,j)) return 0;
    if(grid[i][j] == 0) return 0;
    ll ans = 0;
    if(!vis[i][j])
    {
        vis[i][j] = 1;
        ans = grid[i][j];
       //cout<<i+1<<" "<<j+1<<" "<<ans<<endl;
        for(int k = 0;k<4;k++)
        {
            int ni = i + dx[k];
            int nj = j + dy[k];
            ans += dfs(ni,nj);
        }
           
    }
     
    return ans;
}

void solve()
{
  cin>>r>>c;
  for (int i = 0; i < r;i++)
  {
     for (int j = 0; j < c;j++)
     {
        cin>>grid[i][j];
     }
  }
   for (int i = 0; i < r;i++)
  {
     for (int j = 0; j < c;j++)
     {
        vis[i][j] = 0;
     }
  }
  ll ans  = 0;
  for (int i = 0; i < r;i++)
  {
     for (int j = 0; j < c;j++)
     {
       if(!vis[i][j])
       {
        if(grid[i][j] == 0) continue;
         ll ans1 =  dfs(i,j);
         ans = max(ans1,ans);
       }
     }
    // cout<<endl;
  }
  cout<<ans<<endl;
  

}
int main(){
fastIO
testcase
//solve();
return 0;
}
