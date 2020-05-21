#include<bits/stdc++.h>
using namespace std;

void CheckTriangle(int a,int b,int c){
	if(a+b > c && b+c >a && c+a > b){
		cout<<"YES";
	}
	else cout<<"NO";
}

int main(){
	int a,b,c;
	cout<<"Enter three sides of triangle"<<endl;
	cin>>a>>b>>c;
	
	CheckTriangle(a,b,c);
	
}
