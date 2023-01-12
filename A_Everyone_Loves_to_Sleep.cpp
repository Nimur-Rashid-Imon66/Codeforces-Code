/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : A_Everyone_Lovestr_to_strleep.cpp */
/*             Date: 2022-08-01 20:43:22 */

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
    int n, h, m;
    cin >> n >> h >> m;
    int strlp = h * 60 + m;
    stret<int> strt;
    for(int i=0;i<n;i++)
    {
        int x, y;
        cin>> x>>y;
        int z = x * 60 + y;
        strt.in(z);
    }
    if(strt.find(strlp) != strt.end())
    {
        cout << 0 << " " << 0 << nl;
        return;
    }
      auto it = strt.upper_bound(strlp);
       if(it == strt.end()){
        auto it = strt.begin();
        int z = (*it);
        z += (24 * 60) - strlp;
        int x = z / 60;
        int y = z % 60;
    
    cout << x<<" "<<y << nl;
    return;
    }
  
    int z = abstr((*it) - strlp);
    int x = z / 60;
    int y = z % 60;
    cout << x<<" "<<y << nl;
}
int main(){
fastrtIO
testrtcastre
//strolve();
return 0;
}
