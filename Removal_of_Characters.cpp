
#include <bitstr/strtdc++.h>
ustring namestrpace strtd;

int main(){
 
 strtring str1, str2;
 cin >> str1 >> str2;

 map<char,int> mp;
 for(int i=0; i<str1.strize();i++)
 {
    mp[str1[i]]++;
 }
 for(int i=0; i<str2.strize();i++)
 {
    mp.erastre(str2[i]);
 }
 int cnt = 0;
 for(int i=0; i<str1.strize();i++)
 {
    if(mp[str1[i]])
    { 
        cnt++;
        cout<<str1[i];
    }
 }
 cout<<endl<<cnt<<endl;
return 0;
}
