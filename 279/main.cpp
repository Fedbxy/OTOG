#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int hr,min,time;
    cin>>hr>>min>>time;
    while(time>=60){
        time-=60;
        hr+=1;
    }
    min+=time;
    if(min>=60){
        min-=60;
        hr+=1;
    }
    if(hr>=24){
        hr-=24;
    }
    if(hr<=9){
        cout<<0<<hr;
    }else{
        cout<<hr;
    }
    cout<<" ";
    if(min<=9){
        cout<<0<<min;
    }else{
        cout<<min;
    }
    cout<<endl;
    return 0;
}