#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n,m;cin>>n>>m;
    int a,b;cin>>a>>b;
    int total=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int v;cin>>v;
            if(i==a-1||j==b-1){
                total+=v;
            }
        }
    }
    cout<<total<<endl;
    return 0;
}