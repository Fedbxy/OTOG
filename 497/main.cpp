#include <bits/stdc++.h>

using namespace std;

void print(char x,int n){
    for(int i=1;i<=n;i++){
        cout<<x;
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    int n,count=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            // if((i==1||i==n) || (j==1||j==n)){
            //     cout<<"*";
            // }else{
            //     if( ((i==1+pow(2,1)||i==n-pow(2,1)) && (j>=1+pow(2,1)&&j<=n-pow(2,1))) || ((j==1+pow(2,1)||j==n-pow(2,1)) && (i>=1+pow(2,1)&&i<=n-pow(2,1))) ){
            //         cout<<"*";
            //     }else{
            //         if( ((i==1+pow(2,2)||i==n-pow(2,2)) && (j>=1+pow(2,2)&&j<=n-pow(2,2))) || ((j==1+pow(2,2)||j==n-pow(2,2)) && (i>=1+pow(2,2)&&i<=n-pow(2,2))) ){
            //             cout<<"*";
            //         }else{
            //             cout<<" ";
            //         }
            //     }
            // }

            // if(i==1||j==1||j==n){
            //     cout<<"*";
            // }else if(i==n){
            //     cout<<"*";
            // }else{
            //     if((i==1+pow(2,count)||j==1+pow(2,count)||j==n-pow(2,count)) && ((j>=1+pow(2,count)&&j<=n-pow(2,count)) && (i>=1+pow(2,count)&&i<=n-pow(2,count)))){
            //         cout<<"*";
            //     }else if(i==n-pow(2,count) && ((j>=1+pow(2,count)&&j<=n-pow(2,count)) && (i>=1+pow(2,count)&&i<=n-pow(2,count)))){
            //         cout<<"*";
            //     }else{
            //         cout<<" ";
            //     }
            // }
        }
        cout<<endl;
    }
}