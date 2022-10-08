#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	
	int h,m,new_h,new_m;
	cin>>h>>m;
	m-=45;
	if(m<0){
		h-=1;
		m=60+m;
	}
	if(h<0){
		h=24+h;
	}
	cout<<h<<" "<<m<<endl;
}