#include<bits/stdc++.h>
using namespace std;

void CheckTriangle(int a,int b, int c){
	if(a+b+c == 180 && a>0 && b>0 && c>0){
		cout<<"yEs";
	}
	else cout<<"NO";
}

int main(){
	int a,b,c;
	cout<<"Enter the three angles of triangle"<<endl;
	cin>>a>>b>>c;
	
	CheckTriangle(a,b,c);
}
