#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   long long int n,l,rev=0;
	    cin>>n;
	    
	    while(n){
	        l = n%10;
	        rev = rev*10 + l;
	        n /= 10;
	    }
cout<<rev<<endl;
	}
	return 0;
}
