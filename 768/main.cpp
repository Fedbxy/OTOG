#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long int x){
    if(x<=1){
        return 0;
    }
    for(long long int i=2;i<sqrt(x);i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    long long int x;
    cin>>x;
    if(isPrime(x)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}