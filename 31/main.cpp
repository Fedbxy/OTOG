#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;cin>>n;
    int a[n];
    int price=0,rmn=n,count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        price+=a[i];
    }
    sort(a,a+n);
    while(rmn>=4){
        price-=a[n-(count*2)-2];
        count++;
        rmn-=4;
    }
    cout<<price<<"\n";
}