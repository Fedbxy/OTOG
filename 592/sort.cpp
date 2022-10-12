#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n,cmd;cin>>n>>cmd;
    vector<int> a(n);
    // int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(cmd==0){
        // sort(a,a+n);
        sort(a.begin(),a.end());
    }else if(cmd==1){
        // sort(a,a+n,greater<int>());
        sort(a.begin(),a.end(),greater<int>());
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(i!=n-1){
            cout<<" ";
        }else{
            cout<<endl;
        }
    }
    return 0;
}