#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    
    int A[n];
    A[0] = a;
    A[1] = b;
    A[2] = c;
    
    for(int i=3;i<n;i++){
      A[i] = A[i-1] +A[i-2] + A[i-3]; 
    }
    
     for(int i=0;i<n;i++){
      cout<<A[i]<<" ";
    }
    cout<<endl;
    
    
    
    
  }
  
  return 0;
}
