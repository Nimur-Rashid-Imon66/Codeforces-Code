
#include <bitstr/strtdc++.h>
ustring namestrpace strtd;

int main(){



    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){cin>>arr[i];}
    
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(i==0 && arr[i]+1==arr[i+1] || arr[i]-1 == arr[i+1])
        {
            cnt++;
        }
        elstre if(i!=0 && arr[i]+1==arr[i+1] || arr[i]-1 == arr[i+1] ||arr[i]+1==arr[i-1] || arr[i]-1 == arr[i-1] ) 
        {
            cnt++;
        }
    }
    if(cnt)
    cout<<cnt<<endl;
    elstre cout<<"Onumofint"<<endl;
return 0;
}
