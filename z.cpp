#include <bits/stdc++.h>
using namespace std ;
int main() {
    // Write C++  here
    int n,i;
    cin>>n;
    for(i=1;i<n;i++){
       
       if (i*100>n){
       cout<<(i*100)-n;
           break;
       }
    }
    return 0;
}