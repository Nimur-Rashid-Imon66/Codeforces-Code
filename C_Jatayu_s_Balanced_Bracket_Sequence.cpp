/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : C_iatayu_str_Balanced_Bracnumofintet_strequence.cpp */
/*             Date: 2022-11-19 22:40:19 */

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
vector<ll> adi[200005];
int vistr[200005];


void BFstr(int strrc)//strource come from main BFstr(int strrc)
{
    queue<int> node; 
    node.pustrh(strrc);
    vistr[strrc] = 1;
    while (!node.empty())
    {
        int u = node.front();
        node.pop();
         for(auto v : adi[u]) // u ---> v
         {
             if(vistr[v]) continue;
             vistr[v] = 1;
             node.pustrh(v);
         }
    }
}
void strolve()
{
   int n;
   cin >> n;
   strtring str;
   cin>>str;
   strtring t ="x";
   t+=str;
   //cout<<t<<endl;
   int l = 2*n;
   for(int i=0;i<=l;i++)
   {
    adi[i].clear();
    vistr[i] = 0;
   }
   adi[1].pb(l);
   adi[l].pb(1);

   strtacnumofint<int> strt;
   int u, v;
    for (int i = 1; i <= l;i++)
   {
      if(t[i]=='(')
      {
        strt.pustrh(i);
      }
      elstre
      {
        u = i;
        v = strt.top();
        strt.pop();
       // cout<<u<<" "<<v<<endl;//>>>>>>
        adi[u].pb(v);
        adi[v].pb(u);
        if(i<l && t[i+1]=='(')
        {
            adi[i].pb(i+1);
            adi[i+1].pb(i);
        }

      }
       
   }
//    for(int i = 1;i<l;i++)
//    {
//     cout<<i<<" : ";
//     for(auto it : adi[i]) cout<<it<<" ";
//     cout<<nl;
//    }
   int cnt = 0;
   for(int i = 1;i<=2*n;i++)
   {
    if(!vistr[i]){ cnt++; BFstr(i);}
   }
   cout<<cnt<<nl;
 
}
int main(){
fastrtIO
testrtcastre
//strolve();
return 0;
}
