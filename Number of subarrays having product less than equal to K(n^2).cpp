#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		
		int n;
		cin>>n;
		int A[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		
		int k;
		cin>>k;
		
		//naive method n^2
		
		int count=0,mul;
		
		for(int i=0;i<n;i++){
			
			if(A[i] <= k)
			count++;
			
			mul = A[i];
			for(int j=i+1;j<n;j++){
				mul = mul * A[j];
				
				if(mul <= k)
				count++;
				else break;
			}
			
			
		}
		
		cout<<count<<endl;
		
		
		
		
	}
}
