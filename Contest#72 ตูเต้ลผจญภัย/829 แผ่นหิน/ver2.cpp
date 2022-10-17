#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n,q;cin>>n>>q;
    vector<long long int> a;
    int a1,a2;
    for(int i=0;i<n;i++){
        int v;cin>>v;
        if(i==0){
            a1=v;
        }else if(i==1){
            a2=v;
            a.push_back(a1+a2);
        }else{
            a.push_back(a1+a2+v);
            a1=a2;
            a2=v;
        }
    }
    a.push_back(a1+a2);
    for(int i=0;i<q;i++){
        int v;cin>>v;
        for(int j=0;j<n;j++){
            if(a[j]>=v){
                cout<<j+1<<endl;
                break;
            }
        }
    }
    return 0;
}