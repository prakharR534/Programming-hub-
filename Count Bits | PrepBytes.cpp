#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  
  while(t--){
    int n;
    cin>>n;
    int count=0,sum=0;
    
    for(int i=1;i<=n;i++){
      count +=  __builtin_popcount(i);
       
       
    } 
    
 
     cout<<count<<endl;
    }
    
    
   
  
  
  return 0;
}
