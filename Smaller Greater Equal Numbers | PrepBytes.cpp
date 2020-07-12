#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    
   long long int n,k,e=0,l=0,m=0;
    cin>>n>>k;
    int A[n];
    
    for(int i=0;i<n;i++)
    cin>>A[i];
    
    
    for(int i=0;i<n;i++)
    {
      if(A[i]>k){
        m++;
      }
      else if(A[i]<k){
        l++;
      }
      else if(A[i] == k){
        e++;
      }
    }
      
      
      cout<<l<<" "<<m<<" "<<e<<endl;
    
    
  }
  
  return 0;
}
