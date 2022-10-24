#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n,q;cin>>n>>q;
    long long int a[n];
    long long int n_a[n-1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        if(i==0){
            n_a[i]=a[i]+a[i+1];
        }else if(i==n-1){
            n_a[i]=a[i-1]+a[i];
        }else{
            n_a[i]=a[i-1]+a[i]+a[i+1];
        }
    }
    // sort(n_a,n_a+n);
    for(int i=0;i<q;i++){
        long long int v;cin>>v;
        cout<<lower_bound(n_a,n_a+n-1,v)-n_a+1<<"\n";
    }
    return 0;
}