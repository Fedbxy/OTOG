#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n,q;cin>>n>>q;
    vector<long long int> a(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    vector<long long int> ps(n+1);
    for(int i=1;i<=n;i++){
        ps[i]=a[i]+ps[i-1];
    }
    for(int i=1;i<=q;i++){
        int l,r;cin>>l>>r;
        cout<<ps[r]-ps[l-1]<<"\n";
    }
    return 0;
}