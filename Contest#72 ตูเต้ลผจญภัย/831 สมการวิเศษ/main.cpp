#include <bits/stdc++.h>

using namespace std;

long long int cal(long long int n){
    if(n==1){
        return 69;
    }
    if(n%2==0){
        return cal(n-1)+n;
    }else{
        return cal(n-1)+cal(n-2)+n;
    }
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        int v;cin>>v;
        cout<<cal(v)<<endl;
    }
    return 0;
}