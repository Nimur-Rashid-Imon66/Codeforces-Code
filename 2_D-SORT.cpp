
// #include <bits/stdc++.h>
// using namespace std;
// #define mod            1000000007
// #define nl             endl
// #define Nl             endl
// #define pb             push_back

// #define testcase       {ll t;cin>>t;while(t--){solve();}}
// #define all(c)         c.begin(), c.end()
// typedef long long ll;
// typedef long double ld;
// typedef unsigned long long ull;
// int dx[8] = {-1, 1, 0, 0,-1,1,-1,1};
// int dy[8] = {0, 0, 1, -1,-1,1,1,-1};
// bool cmp(pair<int,int> a,pair<int,int> b)
// {
//     if(a.first>b.first)
//      return false;
//     else if(a.first==b.first)
//     {
//         if(a.second<b.second)
//         return false;
//     }
//     return true;

// }

// void solve()
// {
//      vector<pair<int,int>> a;
//      int n;
//      cin>> n;
//      for(int i = 0;i<n;i++)
//      {
//         int x,y;
//         cin>> x>>y;
//         a.pb({x,y});
//      }
//      sort(all(a) ,cmp);
//     for(int i = 0;i<n;i++) cout<<a[i].first<<" "<<a[i].second<<endl;
// }
// int main(){
// testcase
// //solve();
// return 0;
// }





#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;
    int len = s.size();

    for(int i = 0; i < len; i++)
    {
      
            if(s[i]=='a')
              cout<<'b';
            else if(s[i]=='e')
                cout <<'f';
            else if(s[i]=='i')
                cout <<'j';
            else if(s[i]=='o')
                cout <<'p';
            else if(s[i]=='u')
                cout <<'v';
            else cout<<s[i];
    }
    cout<<endl;
    
}