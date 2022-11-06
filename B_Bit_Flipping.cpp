/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : B_Bit_Flipping.cpp */
/*             Date: 2022-11-02 22:43:44 */

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
    int n,k;
    cin>>n>>k;
    string s;  
    cin>>s; 

    vi mv(n,0);
    if(k==0)
    {
        cout<<s<<nl;
        for(auto it : mv) cout<<it<<" ";
        cout<<nl;
        return;
    }
    if(k%2==1)
    {
        k--;
        int f_o = n-1;
        for(int i = 0;i<n;i++)
        {
            if(s[i]=='1')
            {
             f_o  = i; 
             break;
            }
        }
        for(int i = 0;i<n;i++)
        {
            if(i==f_o) continue;

            if(s[i]=='1') s[i] = '0';
            else s[i] = '1';
        }
        mv[f_o] ++;
    }
    vi zero;
    for(int i=0; i<n;i++) 
        if(s[i]=='0') zero.pb(i);
    
    for(int i = 0 ;i+1<zero.size() && k>0; i+=2)
    {
        mv[zero[i]]++;
        mv[zero[i+1]]++;
        s[zero[i]] ='1';
        s[zero[i+1]] ='1';
        k-=2;
    }
    if(zero.size()%2==1 && k>0)
    {
        mv[zero[zero.size()-1]] ++;
        mv[n-1]++;
        s[zero[zero.size()-1]] = '1';
        s[n-1] = '0';
        k-=2;
    }

    if(k) mv[n-1]+=k;

    cout<<s<<nl;
    for(auto it : mv) cout<<it<<" ";
    cout<<nl;

}
int main(){
fastIO
testcase
//solve();
return 0;
}
