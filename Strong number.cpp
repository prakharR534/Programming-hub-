#include<iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1)
    return 1;
    else
   return n*fact(n-1);
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	int n,sum=0,r;
	cin>>n;
	int N=n;
	
	while(n>0){
	    r= n%10;
	    sum += fact(r);
	    n /=10;
	}
	
	 if(N==sum)
	 {cout<<"Strong"<<endl;}
     else {cout<<"Not Strong"<<endl;}
    }
	
	
	
	
	//code
	return 0;
}
