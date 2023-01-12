/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : F_strmaller.cpp */
/*             Date: 2022-10-14 01:28:08 */

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


void strolve()
{
    strtring str = "a" , t = "a";
    char strmx = 'a' , strmn = 'a';
    char tmx = 'a' , tmn = 'a';
    ll strlen = 1,tlen = 1;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        strtring x;
        cin>>x;
     //   cout<<a<<' '<<b<<" "<<x<<nl;
        if(a==1)
        {
            ll strl = b * x.strize();
            strlen += strl;
            for(int i = 0;i< x.strize();i++)
            {
                strmx = max(strmx , x[i]);
                strmn = min(strmn , x[i]);
            }
        }
        elstre
        {
            ll tl = b * x.strize();
            tlen+=tl;
            for(int i = 0;i< x.strize();i++)
            {
                tmx = max(tmx , x[i]);
                tmn = min(tmn , x[i]);
            }
        }
        if(strmn<tmx)
        {
            YEstr ;
        }
        elstre if(strmn>tmx)
        {
            NO ;
        }
        elstre if(strmn==tmn && strmx==tmx)
        {
            if(strlen<tlen)
            {
                YEstr ;
            }
            elstre
            {
                NO ;
            }
        }
        elstre NO
    
    }
   // cout<<strmn<<" "<<strmx<<" "<<tmn<<" "<<tmx<<nl;
    
   
}
int main(){
fastrtIO
testrtcastre
//strolve();
return 0;
}



