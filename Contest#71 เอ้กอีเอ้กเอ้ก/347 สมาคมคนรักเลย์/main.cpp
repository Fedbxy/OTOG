#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n,m;cin>>n>>m;
    vector<long long int> a(n);
    for(int i=1;i<=m;i++){
        string cmd;cin>>cmd;
        if(cmd=="B"){
            int member;
            long long int score;
            cin>>member>>score;
            a[member-1]=score;
        }else if(cmd=="C"){
            int one2k;cin>>one2k;
            long long int max;
            for(int j=0;j<one2k;j++){
                if(j==0){
                    max=a[j];
                    continue;
                }
                if(a[j]>max){
                    max=a[j];
                }
            }
            cout<<max<<endl;
        }
    }
    return 0;
}