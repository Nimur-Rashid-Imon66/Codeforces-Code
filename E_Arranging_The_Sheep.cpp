/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : E_Arranging_The_Sheep.cpp */
/*             Date: 2023-08-15 10:24:09 */

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


void solve(){

    int n;
    cin >> n;
    string s;
    cin>>s;
    // cout<<s<<endl;
    bool f = 1,sheep=0,srt = 1;
    int nos = 0;
    vi x;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='*') x.pb(i);
        if(!f && s[i]=='*') srt = 0;
        if(sheep && s[i]=='.') f = 0;
        if(!sheep && s[i]=='*') sheep=1;
    }
    if(f||srt)
    {
        cout<<0<<endl;
        return;
    }
    nos = x.size();
    int fh = x[nos/2];
    int sh = x[nos/2 - 1];
    int cnt = 0;

    cnt = 0;
    ll cnt_f = 0;
    for(int i = fh-1;i>=0;i--)
    {
        if(s[i]=='*')
        {
            cnt_f += fh - i - 1-cnt;
            cnt++;
        }
    }cnt = 0;
    for(int i = fh+1;i<n;i++)
    {
        if(s[i]=='*')
        {
            cnt_f += i - fh - 1-cnt;
            cnt++;
        }
    }
    cnt = 0;
    ll cnt_s = 0;
    for(int i = sh-1;i>=0;i--)
    {
        if(s[i]=='*')
        {
            cnt_s += sh - i - 1-cnt;
            cnt++;
        }
    }
    cnt = 0;
    //cout<<fh<<" "<<sh<<nl;
    for(int i = sh+1;i<n;i++)
    {
        if(s[i]=='*')
        {
            cnt_s += i - sh - 1-cnt;
            cnt++;
        }
    }
    cout<<min(cnt_f,cnt_s)<<endl;


}
int main(){
fastIO
testcase
//solve();
return 0;
}
