#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    int n,count=0;
    cin>>n;
    int A[9] =                  //{1,2,5,10,20,50,100,500,1000};
    {1000,500,100,50,20,10,5,2,1};
    
    for(int i=0;i<9;i++){
      if(n >= A[i]){
       
        count  =  count + n / A[i];
         n = n % A[i];
      }
      
    }
    
    cout<<count<<endl;
    
  }
  
  return 0;
}
