#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;cin>>n;
    vector<int> even;
    vector<int> odd;
    for(int i=0;i<n;i++){
        int v;cin>>v;
        if(v%2==0){
            even.push_back(v);
        }else{
            odd.push_back(v);
        }
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end(),greater<int>());
    for(int i=0;i<even.size();i++){
        cout<<even[i]<<" ";
    }
    for(int i=0;i<odd.size();i++){
        cout<<odd[i];
        if(i!=odd.size()-1){
            cout<<" ";
        }else{
            cout<<endl;
        }
    }
    return 0;
}