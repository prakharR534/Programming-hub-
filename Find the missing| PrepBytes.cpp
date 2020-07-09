#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t,sum=0;
	cin>>t;
	while(t--){
	long long int n;
	cin>>n;
	long long int A[n-1];
	for(int i=0;i<n-1;i++)
	cin>>A[i];

 long long int sum = n*(n+1)/2;

	for(int i=0;i<n-1;i++)
	sum = sum-A[i];
	
	cout<<sum<<endl;
	
	}
	//code
	return 0;
}
