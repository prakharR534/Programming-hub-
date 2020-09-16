#include<bits/stdc++.h>
using namespace std;



bool isPowerofTwo(int n){
	return (ceil(log2(n)) == floor(log2(n)));
}

//only for integer values

int main(){
	int n;
	cin>>n;
	
	if( isPowerofTwo(n)){
		cout<<"YES";
	}
	else
	cout<<"NO";
}
