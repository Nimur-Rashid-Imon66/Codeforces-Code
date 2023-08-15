/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : A_1_Non-alternating_Deck_easy_version.cpp */
/*             Date: 2023-02-05 18:13:33 */

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
#define vs             vector<sing>
#define vpll           vector< pair<ll,ll> >
#define sei            set<int>
#define usei           unordered_set<int>
#define ses            set<sing>
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
   int x = 1;
   bool f  = 0;
   int r = n;
   int a , b;
   a = b =0 ;
   ll sum = 0;
   ll aw , ab , bw , bb ;
   aw = ab = bw = bb = 0 ;
   while(r)
   {
        
     if(!f) // alice 
     {
       // cout<<aw<<" "<<ab<<" "<<bw<<" "<<bb<<endl;
        f = 1;
        if(x<=r)
        {
            a+=x , r-=x;
            int w = (x+1)/2 ;
            int c = x / 2;
            aw += w;
            ab += c ;
        } 
        else
        {
            int w = (r+1)/2 ;
            int c = r / 2;
            a+=r , r =0;
            aw += w;
            ab += c ;
        }
     }
     else // bob
     {
        f = 0;
        if(x<=r)
        {
            b+=x , r-=x;
            int c = (x+1)/2 ;
            int w = x/ 2;
            bw += w;
            bb += c;
        } 
        else
        {
            //cout<<"\n r = "<<r<<endl;
            int c = (r+1)/2 ;
            int w = r / 2;
              b+=r , r = 0;
             bw += w;
             bb += c ;
        } 
     }
     x+=4;
    // cout<<aw<<" "<<ab<<" "<<bw<<" "<<bb<<endl;
   }
//    cout<<sum<<" "<<r<<endl;
   
 //  cout<<endl;
   cout<<aw<<" "<<ab<<" "<<bw<<" "<<bb<<endl;

}
int main(){
fastIO
testcase
//solve();
return 0;
}
