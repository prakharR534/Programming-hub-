#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int d,c,m,p,s,k;
  int na,ra,nb,rb;
  cin>>d>>c>>m;
  cin>>p>>s>>k;
  int n ;
  cin>>n;
  
  int as = d+c+m;
  int bs = p+s+k;
  
  na = as /5;
  ra = as%5;
  nb = bs/10;
  rb = bs%10;
  
  if(ra ==0 && rb ==0){
    if((na +nb) > n){
    cout<<"NO\n";
  }
  else
  cout<<"YES\n";
    
  }
  else if(ra==0 || rb ==0){
  
  if((na + 1 +nb) > n){
    cout<<"NO\n";
  }
  else
  cout<<"YES\n";
  }
    else {
  
  if((na + 2 +nb) > n){
    cout<<"NO\n";
  }
  else
  cout<<"YES\n";
  }
  
  
  
  return 0;
}
