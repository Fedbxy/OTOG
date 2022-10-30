#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n;cin>>n;
        int wa_time=0;
        int ac_time=0;
        for(int j=0;j<n;j++){
            string result;
            int time;
            cin>>result>>time;
            if(result=="WA"||result=="TLE"){
                wa_time+=20;
            }else{
                ac_time=time;
            }
        }
        cout<<wa_time+ac_time<<"\n";
    }
    return 0;
}