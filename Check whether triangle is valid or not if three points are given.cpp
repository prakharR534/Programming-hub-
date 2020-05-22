#include<bits/stdc++.h>
using namespace std;

void CheckTriangle(int x1,int y1,int x2,int y2,int x3,int y3){
	
	int a = x1 *(y2 - y3) + x2 * (y3 - y1) + x3*(y1-y2);
	
	if(a == 0)
	cout<<"NO";
	else{
	
	cout<<"YES"<<endl;
	cout<<"AREA - "<<a/2<<endl;
	}
	
}

int main(){
	int x1,x2,x3,y1,y2,y3;
	
	cout<<"Enter points as x,y "<<endl;
	
	cin>>x1>>y1;
	cin>>x2>>y2;
	cin>>x3>>y3;
	
	CheckTriangle(x1,y1,x2,y2,x3,y3);
	
}
