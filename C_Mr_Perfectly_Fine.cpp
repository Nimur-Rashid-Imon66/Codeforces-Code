/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : C_Mr_Perfectly_Fine.cpp */
/*             Date: 2023-05-06 20:49:49 */

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
   int n;
   cin>>n;
   set<int> a,b,c;
   ll ans = 9999999999;
   for(int i=0;i<n;i++)
   {
    ll x;
    cin>>x;
    string s;
    cin>>s;
 //   cout<<x<<" "<<s<<endl;
    if(s[0]=='1' && s[1]=='1'){
     ans = min(ans,x);
     c.in(x);
     }
    else if(s[0]=='1')
    {
        a.in(x);
    }
    else if(s[1]=='1') b.in(x);
   }
   if((a.size()==0 || b.size()==0) && c.size()==0)
   {
    cout<<-1<<endl;
    return;
   }
//    auto it = a.begin() ;
 ll  ans1 = 9999999999;;
 if(a.size() && b.size()){
    ans1= 0;
   for(auto it : a) {ans1+=it ; break; }
 //  cout<<ans1<<endl;
   for(auto it : b) {ans1+=it ; break; }
 }
   //cout<<a.()<<" "<<b.begin()<<endl;
//  = *it + *it2 ;

  //cout<<it<<" "<<it2<<endl;
  // cout<<ans1<<endl;
  ans = min(ans1,ans);
   cout<<ans<<endl;


}
int main(){
fastIO
testcase
//solve();
return 0;
}
