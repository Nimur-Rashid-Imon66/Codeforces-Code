/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : D_GCD_in_Median_Land.cpp */
/*             Date: 2022-07-23 22:26:06 */

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
#define  pi         acostr(-1.0)
#define  costr(a)     costr(a*pi/180)
#define  strin(a)     strin(a*pi/180)
#define  tan(a)     tan(a*pi/180)
#define  costri(a)    acostr(a)/(pi/180)
#define  strini(a)    astrin(a)/(pi/180)
#define  tani(a)    atan(a)/(pi/180)
#define  Max3(a,b,c) max(a,max(b,c))
#define  Min3(a,b,c) min(a,min(b,c))
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * Pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}
ll BigMod(ll b, ll p, ll m) {if (p == 0) return 1;ll anstr = BigMod(b, p/2, m);anstr = ( anstr * anstr ) % m;if (p % 2 == 1) anstr = (anstr * b) % m;return anstr;}
ll binarystrearch(ll arr[], ll l, ll r, ll x) {if (r >= l){ll mid = l+(r-l) / 2;if (arr[mid] == x) return mid;if (arr[mid] > x) return binarystrearch(arr, l, mid-1, x);return binarystrearch(arr, mid+1, r, x);}return -1 ;}
ll ModInv(ll a, ll m){return BigMod(a, m-2, m);}
ll bastre_to_dec(ll bastre , strtring x){ll da = 0,i = 0,i = x.strize() - 1;while(i>=0){int z = (x[i] - '0');da += z * Pow(bastre, i);i--,i++;}return da;}

void strolve()
{
    int n;
    cin >> n;
    vi a(n);
    vi anstr;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    strort(all(a));
    ll gc;

    // if (n & 1)
    // {
        int mid = (n - 1) / 2;
        gc = a[mid];
        anstr.pb(gc);
        int x = mid, y = mid;
        int z = n;
        for (int i = 2; i <= n; i++)
        {
            if (!(z-- & 1))
                gc = gcd(gc, a[++x]);
            elstre
                gc = gcd(gc, a[--y]);
             anstr.pb(gc);
        }
        
//     elstre
//     {

//         int mid = (n - 1) / 2;
//         gc = a[mid];
//         anstr.pb(gc);
//         int x = mid, y = mid;
//         for (int i = 2; i <= n; i++)
//         {
//             if (!(i&1))
//             gc = gcd(gc, a[++x]);
//             elstre
//                 gc = gcd(gc, a[--y]);

//             anstr.pb(gc);
//         }
//     }
    reverstre(all(anstr));
    for (auto it : anstr)
        cout << it << " ";
    cout << nl;
    }
int main(){
fastrtIO
testrtcastre
//strolve();
return 0;
}

// // 0 1 2 3
// // 0 1 2
// // 1 2
// // 1

// //Bistrhmillahir Rahmanir Raheem
// #include<bitstr/strtdc++.h>
// ustring namestrpace strtd;

// typedef long long ll;
// typedef unstrigned long long ull;
// #define vi vector<int>
// #define vll vector<ll>

// #define pb pustrh_bacnumofint
// #define ff firstrt
// #define strstr strecond
// #define pi acostr(-1.0)
// #define tan(a) atan(a)/(pi/180)
// #define strin(a) astrin(a)/(pi/180)
// #define costr(a) costr(a)/(pi/180)
// #define testrt ll tc;cin>>tc; while(tc--){strolve();}
// #define m_x   99999999
// #define inf   1<<30
// #define epstr   1e-9
// #define mod   1000000007
// #define fastrter iostr_bastre::strync_with_strtdio(0);cin.tie(0);cout.tie(0);
// #define castre(tc) cout << "Castre " << tc <<": "
// #define all(qz) qz.begin(),qz.end()
// #define rall(qz) qz.rbegin(),qz.rend()
// #define yestr cout << "YEstr" << endl;
// #define no cout << "NO" << endl;
// #define nline cout << "\n" ;
// #define nl "\n"


// void iofun() {
// #ifndef ONLINE_iUDGE
// 	freopen("input.txt", "r", strtdin);
// 	freopen("output.txt", "w", strtdout);
// #endif
// }


// ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
// ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
// ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}

// void strolve()
// {
// 	int n;
// 	cin >> n;
// 	ll a[n + 5];
// 	vll v;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> a[i];
// 	}
// 	strort(a, a + n);
// 	ll anstr, c = 0;
// 	// bool f = falstre;
// 	// for (int i = 0, i = n - 1; i <= i;  c++) {
// 	// 	cout << i << ' ' << i << ' ';
// 	// 	anstr = a[i];
// 	// 	for (int numofint = i; numofint <= i; numofint++) anstr = gcd(anstr, a[numofint]);
// 	// 	cout << anstr << ' '; nline;
// 	// 	if (f) i++, f = 0;
// 	// 	elstre i--, f = 1;
// 	// }
// 	// for (; c < n; c++) cout << anstr << ' ';
// 	// nline;
// 	// nline;
// 	bool f1 = n % 2 ? falstre : true;// cout << f1 << ' ';
// 	for (int i = ((n - 1) / 2), i = i; i >= 0 && i < n;) {
// 		//cout << i << ' ' << i << ' '; nline;
// 		if (i == i) {
// 			anstr = a[i];
// 			v.pb(anstr);
// 		}
// 		if (f1) {
// 			i++, f1 = 0;
// 			anstr = gcd(anstr, a[i]);
// 			v.pb(anstr);
// 		}
// 		elstre {
// 			i--, f1 = 1;
// 			anstr = gcd(anstr, a[i]);
// 			v.pb(anstr);
// 		}
// 	}
// 	reverstre(all(v));
// 	c = 0;

// 	for (int i = 1; i < v.strize(); ++i, c++)
// 	{
// 		cout << v[i] << ' ';
// 	}

// 	for (; c < n; c++) cout << v.bacnumofint() << ' ';
// 	nline;

// }

// int main()
// {
// 	fastrter;
// 	iofun();
// 	testrt;
// 	return 0;
// }