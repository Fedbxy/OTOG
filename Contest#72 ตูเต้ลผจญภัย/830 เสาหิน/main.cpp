#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;cin>>n;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    string ps;
    char pc[3];
    vector<string> a_p;
    int count=0;
    for(int i=0;i<n;i++){
        if(i==0){
            ps=a[i];
            pc[0]=a[i][0];pc[1]=a[i][1];pc[2]=a[i][2];
            a_p.push_back(a[i]);
            count++;
            continue;
        }
        if(ps!=a[i]){
            ps=a[i];
            if(!(pc[0]==a[i][0]&&pc[1]==a[i][1]&&pc[2]==a[i][2])){
                a_p.push_back(a[i]);
            }
            pc[0]=a[i][0];pc[1]=a[i][1];pc[2]=a[i][2];
            count++;
        }
    }
    cout<<count<<endl;
    for(int i=0;i<a_p.size();i++){
        cout<<a_p[i];
        if(i!=a_p.size()-1){
            cout<<" ";
        }else{
            cout<<endl;
        }
    }
    return 0;
}