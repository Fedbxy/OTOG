#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n,q;cin>>n>>q;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i-1];
    }
    for(int i=1;i<=q;i++){
        int x,y,total=0;
        cin>>x>>y;
        for(int j=x-1;j<=y-1;j++){
            total+=a[j];
        }
        cout<<total<<endl;
    }
    return 0;
}