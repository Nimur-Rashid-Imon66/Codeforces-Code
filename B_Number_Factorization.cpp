/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : B_Number_Factorization.cpp */
/*             Date: 2023-01-29 21:07:19 */

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


void solve()
{
   int n;
   cin>>n;
   map<ll,ll>mp;
   int x = n;
   int cnt = 0 ;
   while (x%2 == 0){
      cnt++;
      x = x/2;
   }
   mp[2] = cnt;
   for(int i = 3 ;i*i<=n;i+=2)
   {
     cnt = 0 ;
     while(x%i==0)
     {
        cnt++;
        x/=i;
     }
     if(cnt)
     {
        mp[i] = cnt;
     }
   }
   if(x>1) mp[x] = 1;
   ll ans = 0;
  
   ll mn ;
   int z = 1;
   while(1)
   {
        z++;if(z==1000) break;
        mn = 1000000000000;
       
        if(mp.size())
        for(auto it : mp)
        {
            if(it.ss>0)
            mn = min(mn,it.ss);
        }
        if(mn == 1000000000000) break;
        ll x = 1;
        if(mp.size())
        for(auto it2 : mp)
        {
            if(it2.ss>0){
             x*= it2.ff;
             mp[it2.ff] = it2.ss - mn;
            }
            
        }
     //   cout<<x<<" "<<mn<<nl;
        ans += x*mn;
        
   }
  // for(auto it : mp) cout<<it.ff<<" "<<it.ss<<Nl;
  cout<<ans<<endl;
}
int main(){
fastIO
testcase
//solve();
return 0;
}
