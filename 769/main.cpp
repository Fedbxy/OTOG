#include <bits/stdc++.h>

using namespace std;

int n,m,c=1;

void multiply(){
    if(c<=m){
        cout<<n<<" x "<<c<<" = "<<n*c<<endl;
        c++;
        multiply();
    }
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin>>n>>m;
    multiply();
    return 0;
}