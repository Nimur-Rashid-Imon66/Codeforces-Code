/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : A_Bombs.cpp */
/*             Date: 2023-03-30 22:38:25 */

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


void solve()
{
     int r,c;
     cin>>r>>c;
     char grid[r+1][c+1];
     for(int i =1 ;i<=r ;i++)
     {
        for(int j = 1;j<=c ;j++)
          cin>>grid[i][j];
     }
     for(int i = 1 ;i<=r ;i++)
    {
        for(int j = 1;j<=c ;j++)
         {
            if(grid[i][j]>='1' && grid[i][j]<='9')
            {
                int power = grid[i][j] - '0';
                grid[i][j] = '.';
                for(int r1 = 1;r1<=r;r1++)
                {
                    for(int c1 = 1;c1<=c ;c1++)
                    {
                        int rng = abs(r1 - i ) + abs(c1 - j);
                        if(grid[r1][c1]=='#' && rng<=power)
                        {
                            grid[r1][c1] = '.';
                        }
                    }
                }
            }
            
         }
    }
   for(int i = 1 ;i<=r ;i++)
    {
        for(int j = 1;j<=c ;j++)
         cout<<grid[i][j];
         cout<<nl;
    }

}
int main(){
fastIO
//testcase
solve();
return 0;
}
