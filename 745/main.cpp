#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n,max,count=0;cin>>n;
    for(int i=1;i<=n;i++){
        int v;cin>>v;
        if(i==1){
            max=v;
            count++;
            continue;
        }
        if(v>max){
            max=v;
            count=1;
            continue;
        }
        if(v==max){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}