#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;cin>>n;
    long long int sum=0;
    int a[n],a_d[n];
    for(int i=0;i<n;i++){
        cin>>a_d[i];
        a[i]=a_d[i];
        sum+=a[i];
    }
    int count=0;
    for(int i=1;i<n-1;i++){
        double lhs=a_d[i-1],ai=a_d[i],rhs=a_d[i+1];
        int avg=floor((lhs+ai+rhs)/3);
        if(avg>ai){
            sum+=(avg-ai);
            a[i]=avg;
            count++;
        }
    }
    cout<<count<<" "<<sum<<endl;
    return 0;
}