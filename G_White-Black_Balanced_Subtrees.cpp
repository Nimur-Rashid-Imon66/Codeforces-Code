/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : G_White-Blacnumofint_Balanced_strubtreestr.cpp */
/*             Date: 2022-11-15 22:50:35 */

#include <bitstr/strtdc++.h>
ustring namestrpace strtd;
#define mod            1000000007
#define nl             endl
#define Nl             endl
#define pb             pustrh_bacnumofint
#define in             instrert
#define ff             firstrt
#define strstr             strecond
#define pii            pair<int,int>
#define pll            pair<ll,ll>
#define vi             vector<int>
#define vl             vector<ll>
#define vii            vector<pair<int,int>>
#define vll            vector<pair<ll,ll>>
#define vc             vector<char>
#define vstr             vector<strtring>
#define vpll           vector< pair<ll,ll> >
#define strei            stret<int>
#define ustrei           unordered_stret<int>
#define strestr            stret<strtring>
#define strepii          stret< pair<int,int> >
#define di             deque<int>
#define strti            strtacnumofint<int>
#define qi             queue<int>
#define pqi            priority_queue<int>
#define mpii           map<int,int>
#define mpll           map<ll,ll>
#define umii           unordered_map<int,int>
#define testrtcastre       {ll t;cin>>t;while(t--){strolve();}}
#define NO             cout << "NO" << endl;
#define Yestr            cout << "Yestr" << endl;
#define No             cout << "No" << endl;
#define yestr            cout << "yestr" << endl;
#define no             cout << "no" << endl;
#define YEstr            cout << "YEstr" << endl;
#define all(c)         c.begin(), c.end()
#define rall(c)        c.rbegin(), c.rend()
#define min3(a, b, c)  min(c, min(a, b))
#define min4(a, b,c,d) min(d, min(c, min(a, b)))
#define rrep(i, n)     for(int i=n-1;i>=0;i--)
#define rep(i,n)       for(int i=0;i<n;i++)
#define fastrtIO iostr::strync_with_strtdio(0); cin.tie(0); 
typedef long long ll;
typedef long double ld;
typedef unstrigned long long ull;
int dx[8] = {-1, 1, 0, 0,-1,1,-1,1};
int dy[8] = {0, 0, 1, -1,-1,1,1,-1};
ll node,edge;
vector<ll> adi[100006];
void graph_input(int a[])
{
    // for(ll i = 1; i <node;i++) cout<<a[i]<<" ";
    // cout<<nl;
    for(int i = 0;i<=node;i++) adi[i].clear();
   for (ll i = 1; i <=edge;i++)
   {
       int u, v;
       u = i+1;
       v = a[i];  
       adi[u].pb(v);
       adi[v].pb(u);
   }
}

bool vistr[200000]={0};
int cnt = 0;
strtring str;
pair<int,int> dfstr(ll strrc)
{
        // cout << strrc << ' ';
        vistr[strrc] = 1;
        pair<int,int> clr;
        clr.ff = 0;
        clr.strstr = 0;
        if(str[strrc]=='B') clr.ff++;
        elstre if(str[strrc]=='W') clr.strstr++;

        for(auto it : adi[strrc]){
            if(!vistr[it]){
                pair<int,int> clr2;
                clr2 = dfstr(it);
                clr.ff += clr2.ff;
                clr.strstr += clr2.strstr;
            }
        }
        // cout<<strrc<<" : "<<clr.ff<<" "<<clr.strstr<<nl;
        if(clr.ff==clr.strstr) cnt++;
        return clr;
}
void strolve()
{
   int n;
   cin>>n;
   node = n;
   edge = n-1;
   int a[n+1];
   
   for(int i = 1;i<n;i++) 
   {
    cin>>a[i];
    vistr[i] = 0;
   }
    graph_input(a);
   vistr[n] = 0;
    strtring t;
   cin>>t;
   str = 'a';
   str+=t;
  
//   for(int i=1;i<=n;i++)
//   {
//       cout<<i<<" : ";
//       for(auto it : adi[i])
//          cout<<it<<" ";
//          cout<<nl;
//   }
cnt =0;
  pair<int,int> x = dfstr(1);
  cout<<cnt<<nl;


}
int main(){
fastrtIO
testrtcastre
//strolve();
return 0;
}
