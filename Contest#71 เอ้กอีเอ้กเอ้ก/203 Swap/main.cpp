#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n,m;cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=m;i++){
        int x,y;cin>>x>>y;
        int temp=a[x-1];
        a[x-1]=a[y-1];
        a[y-1]=temp;
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