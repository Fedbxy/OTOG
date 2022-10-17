#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n,q;cin>>n>>q;
    long long int a1[n],a2[q];
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    for(int i=0;i<q;i++){
        cin>>a2[i];
        for(int j=0;j<n;j++){
            if(j==0){
                if(a1[j]+a1[j+1]>=a2[i]){
                    cout<<j+1<<endl;
                    break;
                }
            }else if(j==n-1){
                if(a1[j-1]+a1[j]>=a2[i]){
                    cout<<j+1<<endl;
                    break;
                }
            }else{
                if(a1[j-1]+a1[j]+a1[j+1]>=a2[i]){
                    cout<<j+1<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}